// #include <stdio.h>
// #include<string.h>      // <string.h>  ---> Use to calculate length except '\0'
// int main(){
//     char name[] = "Harsh";
//     printf("length is :%d", strlen(name));
//     return 0;
// }


#include <stdio.h>
#include<string.h>      // <string.h>  ---> Use to calculate length except '\0'
int main(){
    char name[] = "Harsh";
    int length = strlen(name);
    printf("length is :%d", length);
    return 0;
} 