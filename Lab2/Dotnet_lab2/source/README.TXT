gå til source katalogen
cd /source

for å se alternativer til nye prosjekter
dotnet new --list

Lag et nytt prosjekt
dotnet new web -o MinApi

Installer C# extension inni containeren,
og "Add to Workpace Recommandations"
Søk ette denne extension:
ms-dotnettools.csharp

Du får en sertifikat feil når du kjører,
så lag et utviklersertifikat
dotnet dev-certs https --trust

Start debuggeren, nettleseren kommer opp automatisk
Spiller port eksponeringen en rolle

Prøv å legge til en ny kontroller med input:
app.MapGet("/welcome/{name}", (string name) => $"Hello {name}");