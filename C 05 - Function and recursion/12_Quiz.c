#include <stdio.h>

int factorial(int n);

int main(){
    printf("factorial is:%d",factorial(6));
    return 0;
}

//recursive function
int factorial(int n){
    if(n == 0){
        return 1;
    }
    int factorialNm1 = factorial(n-1);
    int factorialN = factorialNm1 * n;
    return factorialN;

}