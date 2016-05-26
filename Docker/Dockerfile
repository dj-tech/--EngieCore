WORKDIR /code
#debian for docker
FROM debian:wheezy
# Expose the container's network port: 25565 during runtime.
EXPOSE 8080:8080
ADD requirements.txt /code/
ADD Overcraft.bin /code/
RUN pip install -r requirements.txt
RUN firefox 
ADD . /code
CMD python app.py
CMD Overcraft /code/
