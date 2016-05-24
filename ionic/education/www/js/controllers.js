angular.module('starter.controllers', [])

.controller('DashCtrl', function($scope, $http, SessionsFactory) {
  $scope.user = {
    user: {
      email: '',
      password: ''
    }
  };

  var default_http_headers = {
    'Content-Type': 'application/json',
    'Accept': 'application/json',
    'X-User-Email': $scope.user.user.email
  };

  $http.defaults.headers.post = default_http_headers;

  $scope.authenticate = function() {
    var user = JSON.stringify($scope.user);
    SessionsFactory.authenticate(user);
  };
})

.controller('ChatsCtrl', function($scope, Chats) {
  // With the new view caching in Ionic, Controllers are only called
  // when they are recreated or on app start, instead of every page change.
  // To listen for when this page is active (for example, to refresh data),
  // listen for the $ionicView.enter event:
  //
  //$scope.$on('$ionicView.enter', function(e) {
  //});

  $scope.chats = Chats.all();
  $scope.remove = function(chat) {
    Chats.remove(chat);
  };
})

.controller('ChatDetailCtrl', function($scope, $stateParams, Chats) {
  $scope.chat = Chats.get($stateParams.chatId);
})

.controller('AccountCtrl', function($scope) {
  $scope.settings = {
    enableFriends: true
  };
});
