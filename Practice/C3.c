#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    printf("Enter the value of a, b, c: ");
    scanf("%d \n %d \n %d", &a, &b, &c);
    if (a > b && a > c)
    {
        printf("%d is the greatest number", a);
    }
    else if (b > a && b > c)
    {
        printf("%d is the greatest number", b);
    }
    else
    {
        printf("%d is the greatest number", c);
    }
    return 0;
}
