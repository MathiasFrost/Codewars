// noinspection JSUnusedGlobalSymbols

import path from 'path';

export default {
  mode: 'development',
  entry: './Source/Main.coffee',
  output: {
    path: path.resolve('./Build'),
    filename: 'CoffeeScript.js',
  },
  module: {
    rules: [
      {test: /\.coffee$/, use: 'coffeescript-loader'},
      {test: /\.(coffee\.md|litcoffee)$/, use: 'coffeescript-loader?literate'},
      {test: /test\.coffee$/, use: 'mocha-loader', exclude: /node_modules/},
    ],
  },
};