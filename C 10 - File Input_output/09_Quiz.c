#include <stdio.h>

int main(){
    FILE *fptr; 
    fptr = fopen("09_test.txt", "w");

    int n;
    printf("enter n : ");
    scanf("%d", &n);

    for(int i = 1; i<=n; i++){
        if(i % 2 != 0){
            fprintf(fptr, "%d\t", i);
        }
    }

    fclose(fptr);
    return 0;
}