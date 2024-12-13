# README: Industrial Environment Simulation Setup

This README provides instructions for setting up and running the industrial environment simulation. The setup offers two options for running OpenPLC: 
1. **Locally**, integrated with Factory I/O using sensors.
2. **In a container**, with a general cyclic program utilizing timers.

The simulation also includes ScadaBR for monitoring and control.

---

## **1. Docker API Configuration**

Configure the `docker_api` variable in `/terraform/variables.tf` based on your operating system. By default, it is set to **unix**. Modify this variable if your system requires a different configuration.

---

## **2. Docker Images**

### Automatic Build:
- The required Docker images are built by default during the setup process. However, issues may arise depending on your operating system.

### Manual Build (if required):
If the build instructions in `terraform/main.tf` fail, build the images manually:
```bash
docker build -t openplc_image ./openplc
docker build -t scadabr_image ./scadabr
docker build -t ddos_image ./attacks/DDOS
docker build -t mitm_image ./attacks/MitM
docker build -t mb_flooding_image ./attacks/ModbusFlooding
docker build -t http_flooding_image ./attacks/HTTPFlood
```

After manually building the images, comment out the corresponding build instructions in `terraform/main.tf` to avoid conflicts.

---

## **3. Terraform Infrastructure Deployment**

Navigate to the `/terraform` directory to deploy the infrastructure setup.

### Deploy the Setup:
```bash
tofu init
tofu plan
tofu apply
```

### Destroy the Setup:
To remove the entire setup:
```bash
tofu destroy
```

---

## **4. Accessing the Simulation Tools**

### OpenPLC:
- URL: [http://localhost:8081/](http://localhost:8081/)
- Login Credentials:
  - **Username:** `openplc`
  - **Password:** `openplc`

### ScadaBR:
- URL: [http://localhost:8080/ScadaBR/](http://localhost:8080/ScadaBR/)
- Login Credentials:
  - **Username:** `admin`
  - **Password:** `admin`

---

## **5. OpenPLC Projects**

### Factory I/O Integration:
- For instructions, refer to the `/factoryIOconfig` folder.

### OpenPLC in Container:
- For details, refer to the `/openplc_logic` folder.

---

## **6. ScadaBR Configuration**

More detailed instructions for configuring ScadaBR can be found in the `scadabr` folder.

---

## **7. Cybersecurity Attack Simulation **

Currently, the cybersecurity attack simulation containers are not active. To activate them:
1. Uncomment the relevant sections in `terraform/main.tf`.
2. Redeploy the infrastructure by running:
   ```bash
   tofu apply
   ```





