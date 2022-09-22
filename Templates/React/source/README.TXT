Opprett en ny React applikasjon
===============================
Stå i sourcekatalogen
:cd /source 

Lag en ny react applikasjon
:npx create-react-app docktest

:cd docktest
npm start



Unngå å forsøple maskinen din med npm module files
==================================================
-Stop react
-Slett npm_modules
-Stopp containeren

-Map folder til npm katalogen i docker-compose filen
-start containeren igjen
- kjør "npm install" og "npm start"

Nå ser du ingenting til npm_modules utenfor docker!


Kan du debugge react applikasjonen som kjører i containeren?
============================================================
Legg inn konfigurasjon slik i launch.json
....
{
    "version": "0.2.0",
    "configurations": [    
        {
            "name": "Chrome debug react",
            "type": "chrome",
            "request": "launch",
            "url": "http://localhost:3000/",
            "webRoot": "${workspaceRoot}/src"
        }
    ]
}
.......