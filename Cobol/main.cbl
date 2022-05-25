      ******************************************************************
      * Author:
      * Date:
      * Purpose:
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

       procedure division.

           display "Codewars COBOL".

           call 'next_bigger_number'
              using by content n by reference result.
           display 'Next bigger of 1234567890 is ' result.

           stop run.

       end program COBOL.
