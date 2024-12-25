#include <stdio.h>
void printName(char array[]);
int main(){
    char firstName[]= "Harsh";
    char larstName[]= "Vardhan";

    printName(firstName);
    printName(larstName);
    return 0;
}

void printName(char array[]){
    for(int i = 0; array[i] != '\0' ; i++){
        printf("%c", array[i]);
    }
    printf("\n");
}