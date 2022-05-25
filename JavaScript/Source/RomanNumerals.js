class RomanNumber {
  constructor(letter, number) {
    this.letter = letter;
    this.number = number;
  }

  letter;

  number;
}

export class RomanNumerals {

  static #romanNumbers = [
    new RomanNumber('M', 1000),
    new RomanNumber('CM', 900),
    new RomanNumber('D', 500),
    new RomanNumber('CD', 400),
    new RomanNumber('C', 100),
    new RomanNumber('XC', 90),
    new RomanNumber('L', 50),
    new RomanNumber('XL', 40),
    new RomanNumber('X', 10),
    new RomanNumber('IX', 9),
    new RomanNumber('V', 5),
    new RomanNumber('IV', 4),
    new RomanNumber('I', 1),
  ];

  static fromRoman(roman) {
    let ret = 0;
    let i = 0;
    while (roman.length) {
      if (roman.startsWith(this.#romanNumbers[i].letter)) {
        ret += this.#romanNumbers[i].number;
        roman = roman.substring(this.#romanNumbers[i].letter.length);
      } else {
        i++;
      }
    }
    return ret;
  }

  static toRoman(number) {
    let i = 0;
    let ret = '';
    while (number) {
      if (number >= this.#romanNumbers[i].number) {
        ret += this.#romanNumbers[i].letter;
        number -= this.#romanNumbers[i].number;
      } else {
        i++;
      }
    }
    return ret;
  }
}