
resource "docker_image" "openplc" {
  name         = "openplc_image:latest"
  build {
    context    = "${path.module}/../openplc"
  }
}


resource "docker_image" "scadabr" {
    name         = "scadabr_image:latest"
       build {
         context    = "${path.module}/../scadabr"
       }
}


resource "docker_image" "ddos" {
  name         = "ddos_image:latest"
      build {
    context    = "${path.module}/../attacks/DDOS"
      }
}

resource "docker_image" "mitm" {
  name         = "mitm_image:latest"
      build {
    context    = "${path.module}/../attacks/MitM"
      }
}

resource "docker_image" "mb_flooding" {
  name         = "mb_flooding_image:latest"
      build {
    context    = "${path.module}/../attacks/ModbusFlooding"
      }
}

resource "docker_image" "http_flooding" {
  name         = "http_flooding_image:latest"
      build {
    context    = "${path.module}/../attacks/HTTPFlood"
      }
}

resource "docker_network" "docker_network" {
  name   = "docker_network"
  driver = "bridge"

  ipam_config {
    subnet  = var.subnet
    gateway = var.gateway
  }
}

resource "docker_container" "scadabr" {
  name  = "scadabr_container"
  image = docker_image.scadabr.name

  ports {
    internal = 8080
    external = var.port_scada
  }

  ports {
      internal = 502
      external = var.port_scada_tcp
    }

  networks_advanced {
    name         = docker_network.docker_network.name
    ipv4_address = var.scadabr_ipv4
  }
}


resource "docker_container" "openplc" {
  name  = "openplc_container"
  image = docker_image.openplc.name

  ports {
    internal = 502
    external = var.port_openplc_tcp
  }

  ports {
    internal = 8080
    external = var.port_openplc
  }

  networks_advanced {
    name         = docker_network.docker_network.name
    ipv4_address = var.openplc_ipv4
  }
}


# resource "docker_container" "mitm_attack" {
#   name  = "mitm_container"
#   image = docker_image.mitm.name
#   networks_advanced {
#       name         = docker_network.docker_network.name
#       ipv4_address = var.mitm_ipv4
#     }
#
# }
#
# resource "docker_container" "modbus_flooding_attack" {
#   name  = "modbus_flooding_attack_container"
#   image = docker_image.mb_flooding.name
#   networks_advanced {
#       name         = docker_network.docker_network.name
#       ipv4_address = var.mb_flooding_ipv4
#     }
#
# }

# resource "docker_container" "http_flooding_attack" {
#   name  = "http_flooding_attack_container"
#   image = docker_image.http_flooding.name
#   networks_advanced {
#       name         = docker_network.docker_network.name
#       ipv4_address = var.http_flooding_ipv4
#     }
#
# }

# resource "docker_container" "ddos_attack" {
#   name  = "ddos_attack_container"
#   image = docker_image.ddos.name
#   networks_advanced {
#         name         = docker_network.docker_network.name
#         ipv4_address = var.ddos_ipv4
#       }
#
# }


