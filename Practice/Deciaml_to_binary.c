#include <math.h>
#include <stdio.h>

int main() {
  int n, N, F, B = 0, i = 0;
  printf("Enter the number: \n");
  scanf("%d", &n);
  for (N = n; N != 0; N = N / 2) {
    F = N % 2;
    B = B + F * pow(0, i);
    i++;
  }
  printf("%d", B);
  return 0;
}
