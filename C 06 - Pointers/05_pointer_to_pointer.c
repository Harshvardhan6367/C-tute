/*  Syntex of pointer to pointer
        int**ptr;
        char**ptr;
        float**ptr;

*/
#include <stdio.h>

int main(){
    // float price = 100.00;
    // float *ptr = &price;
    // float**pptr = &ptr;

    int i = 5;
    int *ptr = &i;
    int **pptr = &ptr;


    printf("%d", **pptr);
    return 0;
}