#include <stdio.h>
#include <math.h>

int main()
{
    int num, factorial = 1, i;
    printf("Enter the number: ");
    scanf("%d", &num);
    for (i = num; i > 0; i--)
    {
        factorial = factorial * i;
    }
    printf("%d", factorial);
    return 0;
}
