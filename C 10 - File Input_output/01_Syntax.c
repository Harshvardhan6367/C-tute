#include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("Newtest.txt", "r");
    if(fptr == NULL){
        printf("File Does't exist\n");
    }
    else{
    fclose(fptr);
    }
    return 0;
}