#include <stdio.h>
#include <string.h>
void slice(char str[], int n, int m);

int main(){
    char name[] = "Harshvardhan";    //Harshvardhan ----> 012345678....   here H = 0, a = 1 ........
    slice(name, 4, 7);               // here slice function  print values from 4 to 7. 
    return 0;
}
void slice(char str[], int n, int m){
    char newStr[100]; 
    int j =0;
    for(int i = n; i<= m ; i++ , j++){
        newStr[j] = str[i];
    }
    newStr[j] = '\0';
    puts(newStr);
}