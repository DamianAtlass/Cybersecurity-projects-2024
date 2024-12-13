FROM openjdk:11-jre-slim


RUN apt-get update && apt-get install -y wget tar


RUN wget https://archive.apache.org/dist/tomcat/tomcat-9/v9.0.97/bin/apache-tomcat-9.0.97.tar.gz -P /tmp \
    && tar -xvzf /tmp/apache-tomcat-9.0.97.tar.gz -C /opt \
    && rm /tmp/apache-tomcat-9.0.97.tar.gz

RUN mkdir -p /home/scadabr/

RUN wget https://github.com/ScadaBR/ScadaBR/releases/download/v1.2/ScadaBR.war -P /opt/apache-tomcat-9.0.97/webapps/


EXPOSE 8080
EXPOSE 502

# Starte Tomcat
CMD ["/opt/apache-tomcat-9.0.97/bin/catalina.sh", "run"]


