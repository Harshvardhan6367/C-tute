#include <stdio.h>
void printHW(int count);
int main(){
    powerHW(5);
    return 0;
}
//recursive function
void printHW(int count){
    if (count == 0){
        return;
    }
    printf("Hellow World");
    printHW(count-1);
} 