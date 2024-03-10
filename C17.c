#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int age = 19;
    double gpa = 5.6;
    char grade = 'A';
    printf("%p", &age);

    return 0;
}

// output = 0x305acd678
