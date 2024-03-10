#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Person
{
    char name[50];
    int age;
    float salary;
} person1;

int main()
{
    strcpy(person1.name, "Ankur");
    person1.age = 19;
    person1.salary = 100000;
    printf("Name: %s\n", person1.name);
    printf("Age of person: %d\n", person1.age);
    printf("Salary: %.2f", person1.salary);

    return 0;
}
