FROM ubuntu:latest

RUN apt-get update && apt-get install -y \
    build-essential \
    gcc \
    g++

WORKDIR /usr/src/app

COPY ./ /usr/src/app/

RUN g++ -o myapp main.cpp

CMD ["tail", "-f", "/dev/null"]
