#include <stdio.h>
#include <string.h>
struct student {
    int roll;
    float cgpa;
    char name[100];
};

void printInfo(struct student s1);

int main(){ 
    struct student s1 = {1467, 8.7, "Harsh"};
    printInfo(s1);
    return 0;
}
void printInfo(struct student s1){
    printf("Student Information :\n");
    printf("Student.roll = %d\n", s1.roll);
    printf("Student.name = %s\n", s1.name);
    printf("Student.cgpa = %f\n", s1.cgpa);
}
