# OpenPLC Runtime Setup

This README provides step-by-step instructions for setting up 
and running the OpenPLC runtime locally with Factory I/O and in a Docker container environment.
## **Important Information**
First, do the setup for ScadaBR before you do the setup for OpenPLC.

---

## **1. OpenPLC Runtime Local Setup (with Factory I/O)**

### Steps:
1. **Start OpenPLC Runtime:**
    - Open the OpenPLC Runtime interface on your computer.
    - Navigate to the **"Programs"** section.
    - Upload and select the `script.st` program.

2. **Compile the Program:**
    - After selecting `script.st`, click on **Launch Program**.
   
3. **Start PLC:**
    - Go to the **Dashboard**.
    - Click **Start PLC** to begin execution.

4. **Connect to Factory I/O:**
    - Open Factory I/O and configure it to communicate with OpenPLC using the relevant Modbus settings.

---

## **2. OpenPLC Runtime in Docker Container**

### Steps:

1. **Start Docker Infrastructure:**
    - Use Tofu to deploy the infrastructure:
      ```bash
      tofu plan
      tofu apply
      ```

2. **Access OpenPLC Runtime:**
    - Open a browser and navigate to:
      ```
      http://localhost:8081/
      ```

3. **Login to OpenPLC:**
    - Use the following credentials:
        - **Username:** `openplc`
        - **Password:** `openplc`

4. **Enable Modbus Port:**
    - Go to the **Settings** section in OpenPLC.
    - Enable the Modbus port by setting it to **503**.
    - Disable DNP3 Server
    - Disable EtherNet/IP Server

5. **Upload and Compile the Program:**
    - Navigate to the **Programs** section.
    - Upload and select `script_cyclic.st`.
    - Click **Compile** to ensure the program is correctly processed.

6. **Start PLC:**
    - Head to the **Dashboard**.
    - Click **Start PLC** to run the program.

   





