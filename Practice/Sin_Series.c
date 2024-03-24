#include <stdio.h>
#include <math.h>

int main() {
  float x, n, i, j, fact = 1, sum = 0;
  printf("Enter the value of angle and expansion of length: ");
  scanf("%f %f", &x, &n);
  for (i = 1; i <= n; i++) {
    for (j = 1; j <= 2 * i - 1; j++) {
      fact = fact * j;
    }
    sum = sum + (pow(-1, i + 1) * pow(x, 2 * i - 1) / fact);
  }
  printf("%f is the expansion", sum);
  return 0;
}
