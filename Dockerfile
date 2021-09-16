FROM ubuntu:latest

RUN apt -y update && apt install -y

RUN apt -y install g++

COPY . .

WORKDIR /

RUN g++ -o app main.cpp

CMD ["./app"]

