       identification division.
       program-id. next_bigger_number.

       data division.
       working-storage section.
       01  i                 usage index.
       01  len               usage index.
       01  digits.
           05 arr occurs 0 to 38 times depending on len indexed by j.
              10 el          pic 9.

       linkage section.
      * Parameter
       01  n                 pic 9(38).
      * Return value
       01  result            pic S9(38) sign leading.

       procedure division using n result.
           move 0 to i
           inspect n tallying i for leading '0'
           compute len = 38 - i
           move function reverse(n) to digits
           move 1 to j
           search arr varying j
              at end move -1 to result
              when j > 1 and el(j) < el(j - 1)
                 move j to i
                 move 1 to j
                 search arr varying j
                    when el(i) < el(j)
                       move function reverse(digits(i + 1:))
                          to result(39 - len:)
                       move el(j) to result(39 - i:1)
                       move el(i) to el(j)
                       display 'digits is: ' digits
                       display 'result is: ' result
                       move digits(1:i - 1) to result(40 - i:)
                 end-search
           end-search.
       end program next_bigger_number.
