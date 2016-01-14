var express = require("express");

var app = express();

app.set("view engine", "jade");

app.get("/:nombre", function(req,res){
  res.render("index",{doctype: "html", nombre: req.params.nombre});
});
app.post('/:nombre', function(req,res){
  res.render("index",{doctype: "html", nombre: req.params.nombre});
});
app.use(express.static(__dirname + '/public'));

app.listen(8080);
