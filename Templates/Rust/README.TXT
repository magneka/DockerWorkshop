Rust bruker cargo som pakkeverkty og litt til.

Lag et nytt prosjekt med 
........................
:cargo new helloworld
:cd helloworld
:cargo build
:cargo run

Da lages en katalog for prosjektet, og byggefilene og kildekoden ligger
i paralelle kataloger.

Det kan være hensiktsmessig å flytte alt opp et trinn i hierarkiet, da kan man 
blokkere for eksponering av binære filer utenfor containeren.