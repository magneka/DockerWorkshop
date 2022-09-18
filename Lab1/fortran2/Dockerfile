# start by building the basic container
FROM centos:7.6.1810

# add gfortran, debugging tools and make
RUN yum update -y
RUN yum install -y gcc-gfortran gdb make 

WORKDIR /fortran/

#Nå skal vi inn i containeren med vscode
#CMD ["/bin/bash", "./buildandrun.sh"]
