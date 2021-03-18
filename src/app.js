const express = require("express");

const createApp = () => {
  var app = express();
  app.use(express.static(__dirname + "/public"));

  return app;
};

module.exports = createApp;
