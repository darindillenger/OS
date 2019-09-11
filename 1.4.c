/**
 * Part 4 of Assignment 1.
 * @author Darin Johnson
 * @date September 11th, 2019
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>




char* rmstr (char* str1, char *str2) {


     // Looping  through the entirety of str1


    for (int i = 0; i < strlen(str1); i++) {



        if (str1[i] == str2[0]) {
            int count = 0;
            for (int j = i; j < i + strlen(str2); j++) {
                count++;
            }

          
            if (count == strlen(str2)) {
                memmove(&str1[i], &str1[i + strlen(str2)], 1 + strlen(str1 +strlen(str2)) );
                i--;
            }
        }
    }


    return str1;
}

int main (int argc, char** argv) {

    char *str1 = argv[1];
    char *str2 = argv[2];

    str1 = rmstr(str1, str2);
    printf("Result '%s' \n", str1 );

    return 0;
}
