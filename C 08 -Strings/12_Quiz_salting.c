#include <stdio.h>
#include <string.h>

int main(){
    char password[100];
    scanf("%s", password);
    char salt[] = "123";
    strcat(password, salt);
    puts(password);
    return 0;
}