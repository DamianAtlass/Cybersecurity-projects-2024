FROM python

COPY ddosattack.py /app/

RUN apt-get update -y
RUN apt-get install -y iputils-ping

#let container idle to execute script manually
#ENTRYPOINT ["tail", "-f", "/dev/null"]

CMD ["python", "/app/ddosattack.py"]