#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, n, r;
    printf("Enter a 4 digit numeber: ");
    scanf("%d", &n);
    a = n % 10;
    n = n / 10;
    b = n % 10;
    n = n / 10;
    c = n % 10;
    n = n / 10;
    r = (a * 10) + (b * 100) + (c * 1000) + n;
    printf("The reverse of the 4 digit number %d", r);
    return 0;
}
