# Download base image ubuntu 20.04
FROM ubuntu:18.04

# Disable Prompt During Packages Installation
ARG DEBIAN_FRONTEND=noninteractive

RUN apt-get update && apt-get install -y \
    make \
    gcc \
    gdb \
    binutils \ 
    nasm \   
    && rm -rf /var/lib/apt/lists/*

#RUN ext install DamianKoper.gdb-debug

#CMD ["bash"]