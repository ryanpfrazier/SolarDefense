'use strict';

const express = require('express');
const app = express();
const logger = require('morgan');
const bodyParser = require('body-parser');
const path = require("path")
const cookieParser = require('cookie-parser')

const classifieds = require('./routes/classifieds');

app.use(logger('dev'));
app.use(bodyParser.json());
app.use(cookieParser())
app.use('/javascripts', express.static(__dirname + "/../client/javascripts"));
app.use('/stylesheets', express.static(__dirname + "/../client/stylesheets"));
app.use(express.static(path.join(__dirname, '/../client/')));

app.use('/api/classifieds', classifieds);

app.use('*', function (req, res, next) {
  res.sendFile('index.html', {
    root: path.join(__dirname, '/../client')
  })
})

const port = process.env.PORT || 3000;

app.use(function (err, req, res, next) { // <--- #3
  const response = {
    message: err.message
  }
  if (req.app.get('env') === 'development') {
    response.stack = err.stack
  }

  res.status(err.status || 500).json(response)
})

app.listen(port, () => {
  console.log('Listening on port', port);
});

module.exports = app;
