#include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("01_test.txt", "r");
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    return 0;
}