# ScadaBR Setup

This README provides step-by-step instructions for setting up ScadaBR and configuring it to work with OpenPLC Runtime.

---
## **Important Information**
First, do the setup for ScadaBR before you do the setup for OpenPLC.

## **Starting the Infrastructure Setup**

### Steps:
1. Start the infrastructure setup:
   ```bash
   tofu plan
   tofu apply
   ```

2. Access ScadaBR:
    - Open a browser and navigate to:
      ```
      http://localhost:8080/ScadaBR/
      ```

3. Login to ScadaBR:
    - Use the following credentials:
        - **Username:** `admin`
        - **Password:** `admin`

---

## **2. Import scada config.js**

### Steps:
1. **Import our ScadaBR project:**
    - Go to the **Import/ Export** section in ScadaBR.
    - Upload our scada config.js by copiing its content into the white area. Press the "Import" button above afterwards.


