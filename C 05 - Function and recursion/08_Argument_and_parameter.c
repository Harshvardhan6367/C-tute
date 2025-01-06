#include <stdio.h>
#include <math.h>
void calulateprice(float value);

int main(){
    float value = 100.0;
    calulateprice(value);
    printf("Value is %f\n", value);
    
    
    return 0;
}

void calculateprice(float value){
    value = value + (0.18 * value);
    printf("Final price is :%f\n", value);
}