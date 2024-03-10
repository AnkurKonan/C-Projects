#include <stdio.h>
#include <math.h>

int main()
{
    int a, i, r;
    printf("Enter the number of raw: \n");
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        for (r = 1; r <= i; r++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
