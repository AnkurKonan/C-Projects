#include <stdio.h>
#include <math.h>

int main()
{
    float r, h, l, v, a;
    printf("Enter the radius height & length: \n");
    scanf("%f%f%f", &r, &h, &l);
    v = (1 / 3.0) * 3.14 * pow(r, 2) * h;
    a = 3.14 * r * (r + 1);
    printf("The volume of cone is %f & area of cone is & %f", v, a);
}
