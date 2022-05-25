namespace CSharp;

public static class Histogram
{
    public static string Hist(string s)
    {
        var count = "abcdefghijklmnopqrstuvwxyz".ToDictionary<char, char, short>(c => c, _ => 0);

        foreach (char letter in s)
            count[letter]++;

        var strings = from letter in "uwxz"
            let num = count[letter]
            where num > 0
            let str = $"{letter}  {num,-6}"
            select str + new string('*', num);

        return string.Join('\n', strings);
    }
}