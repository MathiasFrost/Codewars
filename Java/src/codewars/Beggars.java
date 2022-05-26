// https://www.codewars.com/kata/59590976838112bfea0000fa/java

package codewars;

public class Beggars {
    public static int[] beggars(int[] values, int n) {
        var arr = new int[n];
        for (int i = 0; i < n; i++) {
            var res = 0;
            for (int j = i; j < values.length; j += n) {
                res += values[j];
            }
            arr[i] = res;
        }

        return arr;
    }
}
