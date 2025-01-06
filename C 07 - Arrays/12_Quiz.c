#include <stdio.h>
void reverse(int array[], int n);  //reverse of an array.
void printArray(int array[], int n);
int main(){
    int array[] = {1, 2, 3, 4, 5,};
    reverse(array, 5);
    printArray(array, 5);
    return 0;
}

void printArray(int array[], int n){
    for(int i = 0; i<n; i++){
        printf("%d \t", array[i]);
    }
    printf("\n"); 
}

void reverse (int array[], int n){
    for(int i = 0; i<n/2; i++){
        int firstVal = array[i];
        int secondVal = array[n-i-1];

        array[i] = secondVal;
        array[n-i-1] = firstVal;
    }
}