#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int age = 19;
    double gpa = 5.6;
    char grade = 'A';
    printf("age: %p\ngpa: %p\ngrade %p", &age, &gpa, &grade);

    return 0;
}

// age : 0x304813678
// gpa : 0x304813670
// grade 0x30481366f
