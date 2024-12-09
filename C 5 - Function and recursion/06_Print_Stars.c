#include <stdio.h>
void printStar();            /* print  --->    *****
                                               *****
                                               *****
                                               *****
                                               *****
*/
int main(){
    printStar();
    printf("\n");
    printStar();
    printf("\n");
    printStar();
    printf("\n");
    printStar();
    printf("\n");
    printStar();
    printf("\n");
    
    
    return 0;
}


void printStar(){
    for(int i = 1; i<=5; i++){
        printf("*");
        
    }
}
