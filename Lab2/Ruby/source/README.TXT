https://rapidapi.com/blog/how-to-build-an-api-in-ruby/

Må installere rails, kunne det vært gjort med en dockerfile?
gem install rails

Lag nytt prosjekt
:rails new cow_say --api --skip-active-record

følg oppskriften på websiden med å lage filer

Bygg:
:cd cow_say
:bundle install
:rails server

Kjør fra terminal

curl localhost:3000/say  -H 'Content-Type: application/json'  -d '{"message": "Hello from RapidAPI"}'
