namespace CSharp;

public static class FuseNumbers
{
    public static long Fuse(long a, long b)
    {
        var strA = a.ToString();
        var strB = b.ToString();

        // Number of digits
        int lenA = strA.Length;
        int lenB = strB.Length;

        int longest = lenA > lenB ? lenA : lenB;

        long ret = 0;

        for (var i = 0; i < longest; i++)
        {
            // strA starts from the last index, while strB starts from the first index
            char numA = i < lenA ? strA[lenA - 1 - i] : '0';
            char numB = i < lenB ? strB[i] : '0';

            // Add the two numbers and adjust for index of digits
            int num = numA - '0' + numB - '0';
            ret += num * (long)Math.Pow(10, longest - 1 - i);
        }

        return ret;
    }
}
