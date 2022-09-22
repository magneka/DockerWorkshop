# Bygg containeren - gir den navn docker-apache-perl
#  docker build -t docker-apache-perl .
#
# docker run [OPTIONS] IMAGE [COMMAND] [ARG...]
# 
# docker run -v $(pwd)/www:/var/www/html -p 8097:80  --rm --name apacheperl -d docker-apache-perl /usr/sbin/apache2ctl -D FOREGROUND
#   -v $(pwd)/www:/var/www/html <--- mapper opp lokal katalog 
#   -p 8097:80                  <--- mapper opp yttre port 8097 mot indre 80
#   -d                          <--- starter containeren detached
#   --name apacheperl           <--- gir navn til containeren  
#   --rm                        <--- Sletter containeren når den er ferdig                   
#   docker-apache-perl          <--- image name
# 
#  /usr/sbin/apache2ctl -D FOREGROUND  <--- argumenter, dvs kjør atache2ctl 


FROM ubuntu:16.04

RUN \
    DEBIAN_FRONTEND=noninteractive && \
    apt-get update && \
    apt-get install -y \        
        build-essential \
        apt-utils \
        ssl-cert \
        apache2 \
        apache2-utils \
        apache2-dev \
        libapache2-mod-perl2 \
        libapache2-mod-perl2-dev \
        libcgi-pm-perl \
        liblocal-lib-perl \
        cpanminus \
        libexpat1-dev \
        libssl-dev \
        mysql-client \
        libmysqlclient-dev \
        libapreq2-dev \
        zip && \            
    cpanm DBD::mysql && \
    a2enmod cgid && \
    a2enmod rewrite && \
    a2dissite 000-default && \
    apt-get update -y && \
    apt-get upgrade -y && \
    apt-get -y clean

COPY ./source/localhost.conf /etc/apache2/sites-enabled/localhost.conf

VOLUME ["/var/www/html"]

EXPOSE 80

# Vi kan ikke angi dette i Dockerfil'en men må gi det som parametre til docker run kommandoen
#CMD ["/usr/sbin/apache2ctl",  "-D",  "FOREGROUND"]
# Men i docker-compose fungerer det med 
# command:  /usr/sbin/apache2ctl -D FOREGROUND