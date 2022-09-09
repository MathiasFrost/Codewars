import { Histogram } from "./src/histogram";
import { NextBigger } from "./src/nextBigger";

console.log("Codewars TypeScript");

console.log(`Next bigger of 1234567890 is  ${NextBigger.nextBigger(1234567890)}`);

const hist = "tpwaemuqxdmwqbqrjbeosjnejqorxdozsxnrgpgqkeihqwybzyymqeazfkyiucesxwutgszbenzvgxibxrlvmzihcb";
console.log(Histogram.hist(hist));
