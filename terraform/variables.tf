variable "network_name" {
  default = "docker_network"
}

variable "subnet" {
  default = "172.28.0.0/16"
}

variable "gateway" {
  default = "172.28.0.1"
}

variable "openplc_ipv4" {
  default = "172.28.0.10"
}

variable "mitm_ipv4" {
  default = "172.28.0.11"
}

variable "mb_flooding_ipv4" {
  default = "172.28.0.12"
}

variable "http_flooding_ipv4" {
  default = "172.28.0.13"
}

variable "scadabr_ipv4" {
  default = "172.28.0.15"
}

variable "ddos_ipv4" {
  default = "172.28.0.20"
}

#variable for support of different OS
variable "docker_api" {
  default = "unix:///var/run/docker.sock" #unix
  #default = "npipe:////./pipe/docker_engine" #windows
}

variable "port_scada"{
    default = 8080
}

variable "port_scada_tcp"{
    default = 502
}

variable "port_openplc"{
    default = 8081
}

variable "port_openplc_tcp"{
    default = 503
}