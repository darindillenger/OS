#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//rmchr.c remove all occurrences of the character from the string.
char* rmchr(char* str, char& c) {
  printf("[enter string being used]: %s\n", str);
  printf("[Remove the string]: %s\n", c);
  printf("%c\n", str[0]);  
  
  for (int i =0; i < strlen(str); i++) { // visits everying in the array
    if (c[0] == str[1]) {
      
      memmove(&str[i], &str[i + 1], strlen(str));
      
      
    }
  }
}
return str;
}

int main (int argc, char** argv) {
  char *str = argv[1];
  char *c = (char*) argv[2];
  
  str = rmchr(str, c);
  printf("Result of occurrences '%s'\n", str );
  
  rerun 0;


}
