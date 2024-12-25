#include <stdio.h>
#include<string.h>
int main(){
    char oldStr[] = "oldStr";
    char newStr[] = "newStr";
    strcpy(newStr, oldStr);      // stecpy(1, 2) ---> 1 is exchange by 2.
    puts(newStr);
    printf("%s", newStr);     //%s use for strings.
    return 0;
}