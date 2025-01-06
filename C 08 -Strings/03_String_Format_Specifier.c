#include <stdio.h>

int main(){             // String Format Specifier --->  '%s'
    char name[50];
    printf("Enter name :");
    scanf("%s", name);                     // no need of & in strings.    (In string scanf Function ----> use 'name' except '&name')
    printf("My name is :%s", name);
    return 0;
}