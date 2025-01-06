#include <stdio.h>

int main(){
    int n ;
    printf("Enter number : "); 
    scanf("%d", &n);

    int fab[n];
    fab[0]= 0;
    fab[1]= 1;
    
    for(int i =2; i <n; i++){
        fab[i]= fab[i-1] + fab[i-2];
        printf("%d \t", fab[i]);
    }
    return 0;
}