/**
 *Part 3 of Assignment 1.
 * @author Darin Johnson
 * @date September 11th, 2019
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>



char* rmchr(char* str, char* c) {


    // Visits address in char array.
    for (int i = 0; i < strlen(str); i++) {
        if (c[0] == str[i]) {


             //memmove. Shifts specified address

            memmove(&str[i], &str[i + 1], strlen(str));


            i--;
        }
    }

    return str; // returns the string word
}

int main (int argc, char** argv) {

    char *str = argv[1];
    char *c = (char*) argv[2];

    str = rmchr(str, c);
    printf("Result '%s'\n", str ); // prince the whats was removed

    return 0;
}
