#include <stdio.h>

int main(){
    int marks;
    printf("Enter marks : ");
    scanf("%d", &marks);
    
    marks >= 35 ? printf("PASS") : printf("FAIL");

    return 0;
}