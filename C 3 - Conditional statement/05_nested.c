#include <stdio.h>

int main(){
    int a;
    printf("Enter no : ");
    scanf("%d", &a);

    if(a>=0){
        printf("The number is positive\n");
        if(a %2 == 0){
            printf("Tne number is even\n");
        }else {
            printf("Tne number is odd\n");
        }
    } else{
        printf("The number is negative\n");
    }
    
    return 0;
}