#include <stdio.h>
#include <string.h>

int main(){
    char firstStr[100] = "Harsh";
    char secStr[] = "vardhan";
    strcat(firstStr, secStr);
    puts(firstStr);
    printf("%s", firstStr);
    return 0;
}