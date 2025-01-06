#include <stdio.h>

int main(){
    int x;
    int *ptr;

    ptr = &x;                              // &x  --> Address of x
    *ptr = 0;   //it means x --> 0

    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr);

    *ptr += 5;                             // *ptr += 5 --->  *ptr = *ptr + 5.
    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr);

    (*ptr)++;                              // ---> *ptr +1                     
    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr);
    
 

    return 0;
}