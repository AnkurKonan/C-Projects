#include <stdio.h>
int main() {
  int num, limit, p = 0, n = 0, z = 0;
  printf("Enter the limit \n");
  scanf("%d", &limit);
  printf("Enter the %d numbers \n", limit);
  while (limit) {
    scanf("%d", &num);
    if (num > 0) {
      p = p + 1;
    } else if (num < 0) {
      n = n + 1;
    } else {
      z = z + 1;
    }
    limit = limit - 1;
  }
  printf("\n the positive number in given set are : %d", p);
  printf("\n the negative number in given set are : %d", n);
  printf("\n the zeros in given set are : %d", z);
  return 0;
}
