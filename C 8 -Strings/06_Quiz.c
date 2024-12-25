#include <stdio.h>
int countLength(char array[]);
int main(){
    char name[100]; 
    fgets(name, 100, stdin); 
    printf("length is : %d", countLength(name));
    return 0;
}
int countLength(char array[]){
    int count = 0;
    for(int i = 0; array[i]!='\0'; i++){
        count++;
    }
    return count-1;
}