import { Beggars } from "./src/beggars.js";
import { Histogram } from "./src/Histogram.js";
import { NextBigger } from "./src/NextBigger.js";
import { RomanNumerals } from "./src/RomanNumerals.js";

console.log("Codewars JavaScript");

console.log(`IX is FromRoman ${RomanNumerals.fromRoman("XI")}`);

console.log(`13 is ${RomanNumerals.toRoman(13)}`);

console.log(`Next bigger of 144 is ${NextBigger.nextBigger(144)}`);

const hist = "tpwaemuqxdmwqbqrjbeosjnejqorxdozsxnrgpgqkeihqwybzyymqeazfkyiucesxwutgszbenzvgxibxrlvmzihcb";
console.log(Histogram.hist(hist));

console.log(Beggars.beggars([1, 2, 3, 4, 5], 2));
