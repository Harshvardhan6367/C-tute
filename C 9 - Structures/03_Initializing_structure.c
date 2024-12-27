#include <stdio.h>
#include <string.h>
struct student{
    int roll;
    float cgpa;
    char name[100];
};
int main(){
    struct student s1 = {1567, 7.8, "Harsh"};
    printf("student roll is = %d\n", s1.roll);
    printf("student cgpa is = %f\n", s1.cgpa);
    printf("student name is = %s\n", s1.name);
    return 0;
}