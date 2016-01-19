//REQUIRES OF MODULES =========================
var express = require('express'),
    mongoose = require('mongoose'),
    bodyParser = require('body-parser'),
    User = require('./models/user'),
    app = express();

//CONFIGURATION =========================
var port = 8080;

//CONFIGURATION OF BODY-PARSER =========================
app.use(bodyParser.urlencoded({ extended: true }));
app.use(bodyParser.json());

//CONECTION TO MONGODB =========================
mongoose.connect('mongodb://localhost/series', function(err, res){
  if(err) console.log('Failed to connect to the DB: ' + err);
  else console.log('Connection to the DB made.');
})

//ROUTES API =========================

/*
schema of rutes:
/api/Users            GET
/api/Users            POST
/api/Users/:user_id   GET
/api/Users/:user_id   PUT
/api/Users/:user_id   DELETE
*/

var router = express.Router();

router.get('/', function(req,res){
  res.json({message: 'root'})
});

router.route('/users')

      .get(function(req,res){
        User.find(function(err, users){
          if(err) res.send(err);
          res.json(users);
        });
      })

      .post(function(req,res){
        var user = new User();
        user.name = req.body.name;
        user.save(function(err){
          if(err) res.send(err);
          res.json({message:'User created'});
        });
      });

router.route('/users/:user_id')

      .get(function(req,res){
        User.findById(req.params.user_id, function(err, user){
          if(err) res.send(err);
          res.json(user);
        });
      })

      .put(function(req,res){
        User.findById(req.params.user_id, function(err, user){
          if(err) res.send(err);
          user.name = req.body.name;
          user.save(function(err){
            if(err) res.send(err);
            res.json({message: 'User updated!'})
          });
        });
      })

      .delete(function(req,res){
        User.remove({_id: req.params.user_id}, function(err, user){
          if(err) res.send(err);
          res.json({message: "deleted successfully!"});
        });
      });


app.use('/api', router);

app.listen(port);
console.log('open http://localhost:8080/')
