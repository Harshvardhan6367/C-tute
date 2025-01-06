#include <stdio.h>
#include <string.h>

   //user define
   struct student{
    int roll;
    char name[100];
    float cgpa;
   }; 

int main(){
    struct student s1;
    s1.roll = 4563;
    s1.cgpa = 8.9;
    //s1.name = "Harsh";            --> this is string notation can't redefine so this is incorrect form.
    strcpy(s1.name, "Harsh");

    printf("Student name is = %s\n", s1.name);
    printf("Student roll number is = %d\n", s1.roll);
    printf("Student cgpa is = %f\n", s1.cgpa);

    struct student s2;
    s2.roll = 4564;
    s2.cgpa = 8.3;
    strcpy(s2.name, "khushi");

    printf("Student name is = %s\n", s2.name);
    printf("Student roll number is = %d\n", s2.roll);
    printf("Student cgpa is = %f\n", s2.cgpa);

    struct student s3;
    s3.roll = 4567;
    s3.cgpa = 6.9;
    strcpy(s3.name, "diksha");
    printf("Student name is = %s\n", s3.name);
    printf("Student roll is = %d\n", s3.roll);
    printf("Student cgpa is = %f\n", s3.cgpa);

    return 0;
}