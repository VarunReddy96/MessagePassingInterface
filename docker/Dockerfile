# Ubuntu 18.04 with JDK 8
# Build image with:  docker build -t csci654:latest .

FROM ubuntu:18.04
MAINTAINER Peizhao Hu, http://cs.rit.edu/~ph

# Install packages
RUN apt-get update && \
    apt-get upgrade -y && \
    apt-get install -y  software-properties-common && \
    apt-get update && \
    apt-get install -y openjdk-8-jdk && \
    apt-get install -y net-tools iputils-ping maven gradle nmap wget git vim build-essential autoconf automake gcc openssh-server openssh-client && \
    apt-get clean

RUN mkdir /csci654 /csci654Tools
WORKDIR /csci654

# Clone the course repository
RUN git clone https://gitlab.com/SpiRITlab/parallelcomputing.git /csci654/

# Download OMP4J library
RUN cd /csci654Tools && \
    wget https://github.com/omp4j/omp4j/releases/download/v1.2/omp4j-1.2.jar

# Install OpenMPI
RUN cd /csci654Tools && \
    wget https://download.open-mpi.org/release/open-mpi/v4.0/openmpi-4.0.1.tar.gz && \
    tar xfzv openmpi-4.0.1.tar.gz && \
    cd openmpi-4.0.1 && \
    ./configure --enable-mpi-java && \
    make && make install && \
    rm -rf ../openmpi-4.0.1.tar.gz && \
    cp ompi/mpi/java/java/mpi.jar /csci654Tools/ && \
    echo "export LD_LIBRARY_PATH=\$LD_LIBRARY_PATH:/usr/local/lib" >> /etc/profile


# Configure SSH access between containers
RUN ssh-keygen -q -t rsa -N '' -f ~/.ssh/id_rsa && \
    cat ~/.ssh/id_rsa.pub >> ~/.ssh/authorized_keys && \
    echo "IdentityFile ~/.ssh/id_rsa" >> /etc/ssh/ssh_config && \
    echo "StrictHostKeyChecking no" >> /etc/ssh/ssh_config && \
    echo "AuthorizedKeysFile     .ssh/authorized_keys" >> /etc/ssh/sshd_config






