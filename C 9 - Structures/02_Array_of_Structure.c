#include <stdio.h>
#include <string.h>
struct student{
    int roll;
    float cgpa;
    char name[100];
}; 
int main(){
    struct student ece[100];
    ece[0].roll = 1234;
    ece[0].cgpa = 8.1;
    strcpy(ece[0].name, "Koshal");
    printf("Student name is = %s\n", ece[0].name);
    printf("Student roll is = %d\n", ece[0].roll);
    printf("Student cgpa is = %f\n", ece[0].cgpa);

    return 0;
}