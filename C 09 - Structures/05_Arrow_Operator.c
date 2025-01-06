#include <stdio.h>
#include <string.h>
struct student{
    int roll;
    float cgpa;
    char name[100];
};
int main(){
    struct student s1 = {1097, 9.1, "Harsh"};
    // struct using prt syntax
    struct student *ptr = &s1;
    printf("Student.roll with ptr = %d\n", (*ptr).roll);

    //struct using Array(->)
    printf("Student->roll = %d\n", ptr->roll);
    printf("Student->name = %s\n", ptr->name);
    printf("Student->cgpa = %f\n", ptr->cgpa);
    return 0;
}