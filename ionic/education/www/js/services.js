angular.module('starter.services', [])

.factory('SessionsFactory', function($http, $sce) {
  return {
    authenticate: function(user) {
      var post_endpoint = $sce.trustAsResourceUrl('http://tean-development.herokuapp.com/api/v1/users/sessions');
      $http.post(post_endpoint, user).then(function(response) {
        window.localStorage['authentication_token'] = response.data.authentication_token;
        console.log(response);
      },
      function(response) {
        alert('Failed: ' + response);
      });
    }
  };
})

.factory('SessionsInterceptor', function($q) {
  return {
    'request': function(config) {
      config.headers['X-User-Token'] = window.localStorage['authentication_token'];
      return config;
    }
  };
})

.factory('Chats', function() {
  // Might use a resource here that returns a JSON array

  // Some fake testing data
  var chats = [{
    id: 0,
    name: 'Ben Sparrow',
    lastText: 'You on your way?',
    face: 'img/ben.png'
  }, {
    id: 1,
    name: 'Max Lynx',
    lastText: 'Hey, it\'s me',
    face: 'img/max.png'
  }, {
    id: 2,
    name: 'Adam Bradleyson',
    lastText: 'I should buy a boat',
    face: 'img/adam.jpg'
  }, {
    id: 3,
    name: 'Perry Governor',
    lastText: 'Look at my mukluks!',
    face: 'img/perry.png'
  }, {
    id: 4,
    name: 'Mike Harrington',
    lastText: 'This is wicked good ice cream.',
    face: 'img/mike.png'
  }];

  return {
    all: function() {
      return chats;
    },
    remove: function(chat) {
      chats.splice(chats.indexOf(chat), 1);
    },
    get: function(chatId) {
      for (var i = 0; i < chats.length; i++) {
        if (chats[i].id === parseInt(chatId)) {
          return chats[i];
        }
      }
      return null;
    }
  };
});
