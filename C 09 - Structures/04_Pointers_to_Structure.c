#include <stdio.h>
#include <string.h>
struct student{
    int roll;
    float cgpa;
    char name[100];
};
int main(){
    struct student s1 = {1678, 8.1, "Singhal"};
    struct student *ptr = &s1;
    printf("Student roll is = %d\n", (*ptr));    //(*ptr) --> point toward all value of student s1.
    printf("Student roll is = %d\n", (*ptr).roll);    //(*ptr).roll --> print only value of student s1 roll number.
    return 0;
}