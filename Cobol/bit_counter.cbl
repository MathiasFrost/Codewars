      * https://www.codewars.com/kata/526571aae218b8ee490006f4/cobol
       identification division.
       program-id. bit_counter.

       data division.
       working-storage section.
       01  abin   pic 9(8) usage is binary.
       01  bbin   pic 9(8) usage is binary.

       linkage section.
       01 n       pic 9(8).
       01 result  pic 9(20).

       procedure division using n result.
           move 0 to result.
           perform calc until n = 0.
           goback.

           calc.
               move n to abin.
               subtract 1 from n giving bbin.
               call "CBL_AND" using abin bbin by value 8.
               move bbin to n.
               add 1 to result giving result.

       end program bit_counter.
