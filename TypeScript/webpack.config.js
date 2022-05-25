// noinspection JSUnusedGlobalSymbols

import path from 'path';

export default {
  mode: 'development',
  entry: './Main.ts',
  output: {
    path: path.resolve('./Build'),
    filename: 'TypeScript.js',
  },
  resolve: {
    extensions: ['.ts'],
  },
  module: {
    rules: [
      {test: /\.ts$/, use: 'ts-loader'},
    ],
  },
};
