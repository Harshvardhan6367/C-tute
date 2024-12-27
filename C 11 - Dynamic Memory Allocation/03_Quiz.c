#include <stdio.h>
#include<stdlib.h>
int main(){
    float *ptr;
    ptr = (float*) malloc(5*sizeof(float));

    ptr[0]= 12;
    ptr[1]= 67;
    ptr[2]= 876;
    ptr[3]= 789;
    ptr[4]= 67;

    for(int i =0; i<5; i++){
        printf("%f\n", ptr[i]);
    }
    return 0;
}