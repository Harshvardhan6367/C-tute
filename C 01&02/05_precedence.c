#include <stdio.h>           /*         *, %,  /    -----> first operate.
                                        +, -,       -----> second.
                                          =         -----> final.
*/

int main(){
    int a;
    a = 4 *3 / 6 * 2;      // left to right.
    printf("%d", a);      
    return 0;
}