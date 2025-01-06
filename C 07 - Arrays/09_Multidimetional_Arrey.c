#include <stdio.h>

int main(){
    //2 student X 3 subject
    int marks [2][3];  // _ _ _ | _ _ _
    marks[0][0]=90;
    marks[0][1]=89;
    marks[0][2]=98;

    marks[1][0]=89;
    marks[1][1]=83;
    marks[1][2]=81;

    printf("%d\n", marks[0][0]);
    printf("%d\n", marks[0][1]);
    printf("%d\n", marks[0][2]);

    printf("%d\n", marks[1][0]);
    printf("%d\n", marks[1][1]);
    printf("%d\n", marks[1][2]);
    return 0;
}