#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int age = 19;
    int *pAge = &age;
    double gpa = 3.4;
    double *pGpa = &gpa;
    char grade = 'A';
    char *aGrade = &grade;

    printf("Age memory address: %p\n", &age);
    return 0;
}
