#include <stdio.h>
int main() {
  int x[2][3][2] = {{{1, 2}, {3, 4}, {6, 3}}, {{5, 4}, {4, 5}, {9, 1}}};
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 2; k++) {
        printf("Element at x[%i][%i][%i]: ", i, j, k);
        printf("%d\n", x[i][j][k]);
      }
    }
  }
}

int main() {
  int a[][2][2] = {{3, 7}, {8, 9}};
  printf("%lu", sizeof(a));
  getchar();
}
