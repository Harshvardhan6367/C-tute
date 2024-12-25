#include <stdio.h>

int main(){
    int array[] = {1, 2, 3, 4, 5};

    printf("%d\n", *(array+3));
    printf("%d\n", *(array+5));
    return 0;
}