# Ubuntu 18.04 with JDK 8
# Build image with:  docker build -t csci654:latest .

FROM ubuntu:18.04
MAINTAINER Peizhao Hu, http://cs.rit.edu/~ph
RUN apt-get update && \
    apt-get upgrade -y && \
    apt-get install -y  software-properties-common && \
    apt-get update && \
    apt-get install -y openjdk-8-jdk && \
    apt-get install -y net-tools iputils-ping maven gradle nmap wget git vim build-essential autoconf automake gcc && \
    apt-get clean

RUN mkdir /csci654
WORKDIR /csci654

RUN git clone https://gitlab.com/SpiRITlab/parallelcomputing.git /csci654/

RUN wget https://download.open-mpi.org/release/open-mpi/v4.0/openmpi-4.0.1.tar.gz && \
    tar xfzv openmpi-4.0.1.tar.gz && \
    cd openmpi-4.0.1 && \
    ./configure --enable-mpi-java && \
    make && make install && \
    rm openmpi-4.0.1.tar.gz


