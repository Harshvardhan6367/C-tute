#include <stdio.h>
#include <string.h>
int countVowel(char str[]);

int main(){
    char name[] = "Harshvardhan";
    printf("Vowels are :%d", countVowel(name));         //print the number of Vowels in name.
    return 0;
}
int countVowel(char str[]){
    int count = 0;
     
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i]== 'a' || str[i]== 'e' || str[i]== 'i' || str[i]== 'o' || str[i]== 'u'){
            count++;
        }
    }
    return count;
}