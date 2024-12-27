#include <stdio.h>
struct complex {
    int real;
    int img;
};
int main(){
    struct complex number1 = {5,9};
    struct complex *ptr = &number1;
    printf("real pari is = %d\n", ptr->real);
    printf("img pari is = %d\n", ptr->img);
    return 0;
}