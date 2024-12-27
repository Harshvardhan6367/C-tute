#include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("08_test.txt", "w");
    char name[100];
    int age;
    float cgpa;
    printf("enter name : ");
    scanf("%s", name);
    printf("enter age : ");
    scanf("%d", &age);
    printf("enter cgpa : ");
    scanf("%f", &cgpa);

    fprintf(fptr, "Student Name =%s\n", name);
    fprintf(fptr, "Student age =%d\n", age);
    fprintf(fptr, "Student cgpa =%f\n", cgpa);

    fclose(fptr);
    return 0;
}