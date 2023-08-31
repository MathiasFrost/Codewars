      * https://www.codewars.com/kata/55983863da40caa2c900004e/cobol
       IDENTIFICATION DIVISION.
       PROGRAM-ID. NEXT_BIGGER_NUMBER.

       DATA DIVISION.
       WORKING-STORAGE SECTION.
       01 I  USAGE INDEX.
       01 LEN USAGE INDEX.
       01 DIGITS.
          05 ARR OCCURS 0 TO 38 TIMES DEPENDING ON LEN INDEXED BY J.
             10 EL  PIC 9.

       LINKAGE SECTION.
      * Parameter
       01 N         PIC 9(38).
      * Return value
       01 RESULT    PIC S9(38) SIGN LEADING.

       PROCEDURE DIVISION USING N RESULT.
           MOVE 0 TO I
           INSPECT N TALLYING I FOR LEADING '0'
           COMPUTE LEN = 38 - I
           MOVE FUNCTION reverse(N) TO DIGITS
           MOVE 1 TO J
           SEARCH ARR VARYING J
           AT END
              MOVE -1 TO RESULT
           WHEN J > 1 AND EL(J) < EL(J - 1)
                MOVE J TO I
                MOVE 1 TO J
                SEARCH ARR VARYING J
                WHEN EL(I) < EL(J)
                     MOVE FUNCTION reverse(DIGITS(I + 1:))
                        TO RESULT(39 - LEN:)
                     MOVE EL(J) TO RESULT(39 - I:1)
                     MOVE EL(I) TO EL(J)
                     MOVE DIGITS(1:I - 1) TO RESULT(40 - I:)
                END-SEARCH
           END-SEARCH.

       END PROGRAM NEXT_BIGGER_NUMBER.