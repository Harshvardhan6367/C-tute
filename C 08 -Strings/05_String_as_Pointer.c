#include <stdio.h>

int main(){
    char *canchange= "Hello World";                   // Can be modifie.
    puts(canchange);
    canchange = "Hello"; 
    puts(canchange);
   
    char cannotchange[] = "Hello World";              // Can't be modifie.
    puts(cannotchange);
    return 0;
}