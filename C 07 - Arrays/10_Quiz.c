#include <stdio.h>
int countOdd(int array[], int n);
int main(){
    int array[] = {1, 2, 3, 4, 5, 6};
    printf("%d", countOdd(array,6));
    return 0;
}
int countOdd(int array[], int n){
    int count = 0;
    for(int i = 0; i<n; i++){
        if(array[i] % 2 != 0){
            count++;
        }
    }
    return count;
}