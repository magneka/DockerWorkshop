Du kan stå i helloworld.cpp koden, og starte debug.
Da bygges det vha av en task (se tasks.json og launch.json)

Alternativt kan du bruke make for å bygge slik
:cd /source
:make 

Rydd opp
:make clean


TODO:
    _ bygg til build folder
    _ Map build folder slik at du ikke kommer i skade for å sjekke den inn
      Dvs den skal kun eksistere inni containeren.
    _ Make filen er knyttet til spesifikk file, kunne det vært gjort med generelt?
      Dvs lage en task for current file