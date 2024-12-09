#include <stdio.h>
void printNamaste();
void printBonjour();

int main(){
    char ch;
    printf("Enter user nationality : ");
    scanf("%c", &ch);

    if(ch == 'i'){
        printNamaste();
    }

    if(ch == 'f'){
        printBonjour();
    }
    return 0;
    }

void printNamaste(){
  printf("Namaste!\n");
}


void printBonjour(){
  printf("Bonjour!\n");
}