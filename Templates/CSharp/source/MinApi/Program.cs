var builder = WebApplication.CreateBuilder(args);
var app = builder.Build();

app.MapGet("/welcome/{name}", (string name) => $"Hallo fra dotnet, faggrupper. {name} is Looking handsome today");

app.MapGet("/", () => "Hello World!");

app.Run();
