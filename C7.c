#include <stdio.h>
#include <math.h>

int main()
{
    float first, second, a;
    printf("Enter first number : ");
    scanf("%f", &first);
    printf("Enter second number : ");
    scanf("%f", &second);
    a = first;
    first = second;
    second = a;
    printf("\n the number after swapping first number is %f", first);
    printf("\n the number after swapping second number is %f", second);
    return 0;
}
