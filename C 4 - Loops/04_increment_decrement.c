#include <stdio.h>

int main(){
     // i++(pre increment) ,             ++i(post increment)               -----> increment operator.
     // i--(pre decrement) ,             --i(post decrement)               -----> decrement operator. 

     int i = 1;

    printf("%d\n", i++);           // i++  --> first use then increment.(pre increment)
    printf("%d\n", i);

    printf("%d\n", ++i);          // ++i   --> first increment then use.(post increment)
    printf("%d\n", i);


    
    printf("%d\n", i--);           // i--  --> first use then decrement.(pre decrement)
    printf("%d\n", i);

    printf("%d\n", --i);          // ++i   --> first decrement then use.(post decrement)
    printf("%d\n", i);


    return 0;
}