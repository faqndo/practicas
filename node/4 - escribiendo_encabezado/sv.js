//200 todo bien
//400 no encontro algo
//300 se movio lo que estamos buscando
//600 algo salio mal

//para probar tirar un curl -I localhost:8080

var http = require("http"),
    fs   = require("fs");

http.createServer(function(req,res){
  fs.readFile("./index.html", function(err,html){
    res.writeHead(200,{"Content-Type":"application/json"});
    res.write(JSON.stringify({nombre:"facundo"}));
    res.end();
  });
}).listen(8080);
