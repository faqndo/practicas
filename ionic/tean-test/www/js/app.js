angular.module('starter',
  ['ionic', 'loginCtrl', 'registerCtrl', 'dashCtrl', 'starter.services'])

 /* Run */
.run(function($ionicPlatform) {
  $ionicPlatform.ready(function() {
    if(window.cordova && window.cordova.plugins.Keyboard) {
      cordova.plugins.Keyboard.hideKeyboardAccessoryBar(true);
      cordova.plugins.Keyboard.disableScroll(true);
    }
    if(window.StatusBar) {
      StatusBar.styleDefault();
    }
  });
})
/* END Run */

/* Routes */
.config(function($stateProvider, $urlRouterProvider){
  $stateProvider
  .state('mean', {
    url: '/',
    templateUrl: 'templates/meanView.html'
  })
  .state('login', {
    url: '/login',
    templateUrl: 'templates/signInView.html',
    controller: 'loginCtrl'
  })
  .state('register', {
    url: '/register',
    templateUrl: 'templates/signUpView.html',
    controller: 'registerCtrl'
  })
  .state('dash', {
    url: '/dashboard',
    templateUrl: 'templates/dashView.html',
    controller: 'dashCtrl'
  })
  $urlRouterProvider.otherwise('/');
})
/* END Routes */
