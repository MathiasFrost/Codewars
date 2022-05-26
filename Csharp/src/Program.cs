using System.Text.Json;
using CSharp;

Console.WriteLine("Codewars C#");

Console.WriteLine($"'IX' is {RomanNumerals.FromRoman("IX")}");
Console.WriteLine($"1642 is {RomanNumerals.ToRoman(1642)}");

Console.WriteLine($"Next bigger of 1234567890 is {NextBigger.NextBiggerNumber(1234567890)}");

const string hist = "tpwaemuqxdmwqbqrjbeosjnejqorxdozsxnrgpgqkeihqwybzyymqeazfkyiucesxwutgszbenzvgxibxrlvmzihcb";
Console.WriteLine(Histogram.Hist(hist));

Console.WriteLine(JsonSerializer.Serialize(Beggars.Get(new[] { 1, 2, 3, 4, 5 }, 2)));