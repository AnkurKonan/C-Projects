#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, d, e;
    printf("Enter 4 numbers \n");
    scanf("%d %d %d %d ", &a, &b, &c, &d);
    if (a < b)
    {
        if (a < c)
        {
            if (a < d)
            {
                e = a;
                printf("%d is smallest number ", e);
            }
            else
            {
                e = d;
                printf("%d is smallest number ", e);
            }
        }
        else
        {
            if (c < d)
            {
                e = c;
                printf("%d is smallest number ", e);
            }
            else
            {
                e = d;
                printf("%d is smallest number ", e);
            }
        }
    }
}
