#include <stdio.h>
#include <math.h>

int main()
{
    int n, a, s, r;
    printf("Enter a number of 4 digits: \n");
    scanf("%d", &n);
    s = 0;
    for (a = n; a != 0; a = a / 10)
    {
        r = a % 10;
        s = s + r;
    }
    printf("The sum of 4 digit number %d", s);
    return 0;
}
