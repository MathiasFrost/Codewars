export class Histogram {

  public static hist(s: string): string {
    const strings: string[] = [];
    for (const letter of ['u', 'w', 'x', 'z']) {
      const count = s.match(new RegExp(letter, 'g'))?.length;
      if (!count) continue;
      const string = `${letter}  ${count.toString().padEnd(5)} ${'*'.repeat(count)}`;
      strings.push(string);
    }
    return strings.join('\n');
  }
}
