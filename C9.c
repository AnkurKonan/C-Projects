#include <stdio.h>
#include <math.h>

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d ", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("The number after swapping are a = %d & b = %d", a, b);
}
