      ******************************************************************
      * Author: Mathias Løken
      * Date: 2020-09-10
      * Purpose: Codewars
      * Tectonics: cobc
      ******************************************************************
       identification division.
       program-id. COBOL.

       data division.
       file section.

       working-storage section.
      * next_bigger_number
       01  n                 pic 9(38) value 1234567890.
       01  result            pic s9(38) sign leading.
      * bit_counter
       01  bits              pic 9(8) value 1234.
       01  bitres            pic 9(20).

       procedure division.

           display "Codewars COBOL".

           call "next_bigger_number"
              using by content n by reference result.
           display "Next bigger of 1234567890 is " result.

           call "bit_counter" using by content bits by reference bitres.
           display "Number of bits in 1234 is " bitres.

           stop run.

       end program COBOL.
