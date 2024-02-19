#include <stdio.h>
#include <math.h>

int main()
{
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    if (year % 400 == 0)
    {
        printf("%d is the leap year", year);
    }
    else if (year % 100 == 0)
    {
        printf("%d is not a leap year", year);
    }
    else if (year % 4 == 0)
    {
        printf("%d is not leap year", year);
    }
    else
    {
        printf("%d is not leap year", year);
    }
}
