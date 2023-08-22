       IDENTIFICATION DIVISION.
       PROGRAM-ID. MOB-CODING.
       DATA DIVISION.
       WORKING-STORAGE SECTION.
      *>   variable section
      *>   name        type     value
        01 I          PIC 9(5) VALUE 1.
        01 J          PIC 9(5) VALUE 1.
       PROCEDURE DIVISION.
      *>   function section
       DOUBLE-LOOP.
        PERFORM
           VARYING I FROM 1 BY 1 UNTIL I > 10
            PERFORM
                VARYING J FROM 1 BY 1 UNTIL J > 10
                    PERFORM OUTPUT-LIGHT
            END-PERFORM
        END-PERFORM.
       GOBACK.
       OUTPUT-LIGHT.
        DISPLAY 'light: i = ' I ', j = ' J.
       END PROGRAM MOB-CODING.
