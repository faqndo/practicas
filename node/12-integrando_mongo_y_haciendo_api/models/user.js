var mongoose = require('mongoose'),
    schema = mongoose.Schema;

var user = new schema({
  name: String
});

module.exports = mongoose.model('User', user);
