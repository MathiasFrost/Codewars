export class Histogram {

  /** @param s {string}
   * @returns string */
  static hist(s) {
    const count = {};
    for (const letter of s)
      count[letter] = count[letter] ? count[letter] + 1 : 1;

    let res = [];
    for (const letter of 'uwxz') {
      if (count[letter]) {
        const num = `${count[letter]}      `.substring(0, 6);
        const stars = '*'.repeat(count[letter]);
        res.push(`${letter}  ${num}${stars}`);
      }
    }

    return res.join('\n');
  }
}