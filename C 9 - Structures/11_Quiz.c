#include <stdio.h>
typedef struct BankAccount{
    int accountNo;
    char name[100];
}acc;
int main(){
    acc acc1 = {1234, "Harsh"};
    acc acc2 = {1235, "Sandeep"};
    acc acc3 = {1236, "fpps"};

    printf("Account no is = %d\n", acc1.accountNo);
    printf("Name no is = %s\n", acc1.name);
    printf("Account no is = %d\n", acc2.accountNo);
    printf("Name no is = %s\n", acc2.name);
    printf("Account no is = %d\n", acc3.accountNo);
    printf("Name no is = %s\n", acc3.name);
    return 0;
}