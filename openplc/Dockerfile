FROM tuttas/openplc_v3


RUN mkdir -p /home/openplc/scripts
COPY run.sh /home/openplc/
COPY script.st /home/openplc/scripts
COPY script_cyclic.st /home/openplc/scripts

RUN chmod +x /home/openplc/run.sh

RUN apt-get install dos2unix
RUN dos2unix /home/openplc/run.sh

EXPOSE 503
EXPOSE 8081
EXPOSE 20000
EXPOSE 43628

CMD ["/home/openplc/run.sh"]

