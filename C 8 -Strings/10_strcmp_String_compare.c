#include <stdio.h>
#include <string.h>
/*
              strcpm(firstStr, secStr)
  Compares 2 strings & returns a value
  0 -> string equal
 positive -> first > second (ASCII)
 negative -> first < second (ASCII)
*/

int main(){
    char firstVal[] = "harsh";
    char secondVal[] = "vardhan";
    printf("%d", strcmp(secondVal, firstVal));     // strcmp(1, 2) compair 1 from 2 (ascii value). 
    return 0;
}