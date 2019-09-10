#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


//rmstr.c remvoves occurencs of characters from array
//str1 - pointer to char what to move
//str2 - pointer to char of sequence of characters to move


char* rmstr (char* str1, char *str2) {

printf("%s\n", strstr(str1, str2));
  
for (int i = 0; i < strlen(strl1); i++) {
  
  if (str1[i] == str2 [0]) {
    int count =0;
    for (int j = i; j < i + strlen(str2); j++) {
      count++;
      
    }
    
    if (count == strlen(str2)) {
      memmove(&str1[i], &str1[i + strlen(str2)], 1 + strlen(str1 + strlen(str2)) );
      
    }
     
  }
}

return str1;

}

int main (int argc, charr** argv) {
  char *str1 = argv[1];
  char *str2 =argv[2];
  
  str1 = rmstr(str1, str2);
               
  retrun 0;
               
  }
