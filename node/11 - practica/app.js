//variables
var express = require("express");
var bodyParser = require("body-parser");
var app = express();

//view engine
app.set("view engine", "jade");

//uses
app.use(express.static(__dirname + '/public'));
app.use(bodyParser.urlencoded({extended:false}));
app.use(bodyParser.text());

//routes
app.get("/", function(req,res){
  var user = req.body.user;
  res.render("index",{doctype: "html", nombre: user});
});
app.post("/", function(req,res){
  var user = req.body.user;
  res.render("index",{doctype: "html", nombre: user});
});

//port
app.listen(8080);
