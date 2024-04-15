#include <stdio.h>

void swaping_numbers(int *, int *);
int main() {
  int a = 10, b = 20;
  swaping_numbers(&a, &b);
  printf("Inside caller: a = %d & b = %d", a, b);
  return 0;
}
void swaping_numbers(int *x, int *y) {
  int t;
  t = *x;
  *x = *y;
  *y = t;
  printf("Inside the function: x = %d y = %d\n", *x, *y);
}
