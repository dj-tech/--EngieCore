WORKDIR /code
FROM
ADD requirements.txt /code/
ADD Overcraft.bin /code/
RUN pip install -r requirements.txt
RUN firefox 
ADD . /code
CMD python app.py
CMD Overcraft /code/
