#include <stdio.h>           /*         *, %,  /    -----> first operate.
                                        +, -,       -----> second.
                                          =         -----> final.
*/

int main(){
    int a;
    a = 4 *3 / 6 * 2;
    printf("%d", a);       // left to right.
    return 0;
}