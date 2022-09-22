FROM swipl
ARG UID=1000
ARG GID=1000
 
# The user that will run the app 
ARG USER=docker
ARG PW=docker
 
# Add the user that will run the app
RUN useradd -m ${USER} --uid=${UID} && echo "${USER}:${PW}" | chpasswd
 
# Setup default user, when enter docker container
USER ${UID}:${GID}
WORKDIR /app/
 
COPY ./source/prolog /app
CMD ["swipl", "/app/start.pl"]