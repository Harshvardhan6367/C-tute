#include<stdio.h>

int main(){
    int marks;
    printf("Enter marks :");
    scanf("%d", &marks);
    
    if(marks>35){
        printf("PASS\n");
        printf("Well done\n");
    }
    else{
        printf("FAIL\n");
        printf("Try again later\n");
    }


    return 0;
}