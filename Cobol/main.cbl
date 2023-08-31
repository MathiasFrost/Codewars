      ******************************************************************
      * Author: Mathias Løken
      * Date: 2020-09-10
      * Purpose: Codewars
      * Tectonics: cobc
      ******************************************************************
       IDENTIFICATION DIVISION.
       PROGRAM-ID. COBOL.

       DATA DIVISION.
       FILE SECTION.

       WORKING-STORAGE SECTION.
      * next_bigger_number
       01 N       PIC 9(38)  VALUE 1234567890.
       01 RESULT  PIC S9(38) SIGN LEADING.
      * bit_counter
       01 BITS    PIC 9(8)   VALUE 1234.
       01 BITRES  PIC 9(20).

       PROCEDURE DIVISION.

           DISPLAY "Codewars COBOL".

           CALL "next_bigger_number"
              USING BY CONTENT N BY REFERENCE RESULT.
           DISPLAY "Next bigger of 1234567890 is " RESULT.

           CALL "bit_counter" USING BY CONTENT BITS BY REFERENCE BITRES.
           DISPLAY "Number of bits in 1234 is " BITRES.

           STOP RUN.

       END PROGRAM COBOL.