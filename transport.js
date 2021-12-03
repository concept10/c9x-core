
/* runtime - Manage communication with frontend via socket.io
*/


var Promise = require('bluebird');
var Events = require('./events');

var events = Events.create();
var devices;
var project = require('./project');

var alarms;
var plugins;
var utils = require('./utils');


var apiDevice;
var settings;
