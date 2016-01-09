var http = require("http");

var manejador = function(solicitud, respuesta){
  console.log("hola");
  respuesta.end("chau");
}

var servidor = http.createServer(manejador);

servidor.listen(8080);
