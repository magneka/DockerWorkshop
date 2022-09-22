var builder = WebApplication.CreateBuilder(args);
var app = builder.Build();

app.MapGet("/welcome/{name}", (string name) => $"Hallo fra dotnet, {name}. Looking handsome today");

app.MapGet("/", () => "Hello World!");

app.Run();
