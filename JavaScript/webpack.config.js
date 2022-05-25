// noinspection JSUnusedGlobalSymbols

import path from 'path';

export default {
  mode: 'development',
  entry: './Main.js',
  output: {
    path: path.resolve('./Build'),
    filename: 'JavaScript.js',
  },
};