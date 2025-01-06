#include <stdio.h>

int main(){
    char name[100];
    //gets(name);                        // gets is unsafe so we use fgets.
    fgets(name, 100, stdin);          // stdin ----> standard input.
    puts(name);
    return 0;
}