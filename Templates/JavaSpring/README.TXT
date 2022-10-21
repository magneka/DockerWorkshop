Oppskrift tatt herfra:
https://www.docker.com/blog/kickstart-your-spring-boot-application-development/

Info om containerisering av Spring boot applikasjon
https://www.docker.com/blog/9-tips-for-containerizing-your-spring-boot-code/


Lage ny spring applikasjon
https://spring.io/quickstart

------------------
Kjør applikasjonen
------------------
cd /source
./mvnw spring-boot:run

Du kan debugge ved å gå i kildekoden til main filen og se at over
"public static" står det to små graå "run | debug" som du kan klikke på.
Set breakpoint i controlleren og debug.