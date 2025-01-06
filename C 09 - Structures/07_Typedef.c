#include <stdio.h>
#include <string.h>
typedef struct student{
    int roll;
    float cgpa;
    char name[100];
}stu;

typedef struct computerengineerstudent{               //typedef --> use to simplify name. 
    int roll;                                         // like computerengineerstudent  use as 'coe'.
    float cgpa;
    char name[100];
}coe;

int main(){
    stu s1;
    s1.roll = 1345;
    s1.cgpa = 8.7;
    strcpy(s1.name, "Harsh");
    
    printf("%s\n", s1.name);
    printf("%d\n", s1.roll);
    printf("%f\n", s1.cgpa);

    coe s2;
    s2.roll = 1245;
    s2.cgpa =8.9;
    strcpy(s2.name, "Harsha");
    
    printf("%s\n", s2.name);
    printf("%d\n", s2.roll);
    printf("%f\n", s2.cgpa);


    return 0;
}