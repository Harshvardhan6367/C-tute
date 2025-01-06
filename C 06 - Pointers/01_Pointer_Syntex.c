#include <stdio.h>

int main(){
    int age = 22;
    int *ptr = &age;                      // *   --> Asterisk
    int _age = *ptr;

    printf("%d", _age);
    return 0;
}