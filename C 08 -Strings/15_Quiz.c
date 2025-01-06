#include <stdio.h>
#include <string.h>
//Check Whether a charecter is present in a word or not.
void checkChar(char str[], char ch);
int main(){
    char name[] = "Harshvardhan";                   
    char ch = 'v';
    checkChar(name, ch);
    return 0;
}
void checkChar(char str[], char ch){
    for(int i=0; str[i] != '\0'; i++){
        if(str[i]== ch){
            printf("Character is present");
            return;
        }
    }
    printf("Character is not present :(");
}