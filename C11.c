#include <stdio.h>
#include <math.h>

int main()
{
    int N, m, a;
    printf("Enter the numnebr to display its multiplicaiton table: \n");
    scanf("%d", &N);
    m = 1;
    for (a = N; m <= N; m++)
    {
        printf("%d * %d = %d \n", a, m, a * m);
    }
    return 0;
}
