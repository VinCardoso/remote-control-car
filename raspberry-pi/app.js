
// Control Require
  var gpio = require('rpi-gpio');
  var app = require('express')();
  var http = require('http').Server(app);
  var io = require('socket.io')(http);

// Control Code

  app.get('/', function(req, res){
    res.sendFile(__dirname + '/index.html');
  });

  // Variables
    var io_front = 21;
    var io_back  = 23;
    var io_right = 24;
    var io_left  = 26;
    var prefix = "io_";

    var front, back, right, left;

  // Set Pins IO
    gpio.setup(io_front, gpio.DIR_OUT);
    gpio.setup(io_back, gpio.DIR_OUT);
    gpio.setup(io_right, gpio.DIR_OUT);
    gpio.setup(io_left, gpio.DIR_OUT);


  // Connection with browser
    io.on('connection', function(socket){

      socket.on('car-control', function(direction, value){

        port = eval(prefix.concat(direction));

        if(value == 'able'){
          gpio.write(port, false);
        }else{
          gpio.write(port, true);
        }

        console.log(direction+" "+value);

      });

    });


  http.listen(3000, function(){
    console.log('Server working on port 3000');
  });