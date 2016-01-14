var express = require("express");

var app = express();

app.set("view engine", "jade");

app.get("/",function(req,res){
  res.render("index",{doctype:"html"});
});

app.get("/algo", function(req,res){
  res.render("algo",{doctype:"html"});
});

app.get("/algo/:nombre", function(req,res){
  res.render("algo2",{doctype:"html", nombre:req.params.nombre});
});

app.listen(8080);
