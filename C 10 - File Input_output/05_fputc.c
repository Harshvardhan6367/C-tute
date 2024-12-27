#include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("01_test.txt", "w");

    fputc('M', fptr);
    fputc('A', fptr);
    fputc('N', fptr);
    fputc('G', fptr);
    fputc('O', fptr);
    return 0;
}