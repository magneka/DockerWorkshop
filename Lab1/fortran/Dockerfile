# start by building the basic container
FROM centos:7.6.1810

# add gfortran, debugging tools and make
RUN yum update -y
RUN yum install -y gcc-gfortran gdb make 

# build the hello world code
COPY Makefile HelloWorld.f90 HelloAgainInput.txt /fortran/
WORKDIR /fortran/
RUN make HelloWorld

# configure the container to run the hello world executable by default
CMD ["./HelloWorld"]