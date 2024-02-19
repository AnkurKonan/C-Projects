#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    printf("Enter the sides: \n");
    scanf("%d \n %d \n %d", &a, &b, &c);
    if (a == b && b == c && c == a)
    {
        printf("Equivalent triangle");
    }
    else if ((a == b) || (b == c) || (c == a))
    {
        printf("Isocless triangle");
    }
    else
    {
        printf("Scalane triangle");
    }
}
