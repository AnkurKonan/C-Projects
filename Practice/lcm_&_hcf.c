#include <stdio.h>
int main() {
  int a, b, h, l, a1, b1;
  printf("Enter two number: \n");
  scanf("%d %d ", &a, &b);
  a1 = a;
  b1 = b;
  while (a1 != b1) {
    if (a1 > b1) {
      a1 = a1 - b1;
    } else {
      b1 = b1 - a;
    }
    h = a1;
    l = (a * b) / h;
    printf("/n HCF = %d and LCM = %d", h, l);
    return 0;
  }
}
