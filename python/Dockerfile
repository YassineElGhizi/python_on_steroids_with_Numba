FROM python:3.9-slim

WORKDIR /app

COPY main.py ./

RUN python3 -m pip install numba

CMD python3 main.py

