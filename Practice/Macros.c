#include <stdio.h>
#define pie 3.14159
#define AREA(r) (pie * (r) * (r))

int main() {
  float r = 70;
  printf("Area of Circle with radius %.0f: %.3f", r, AREA(r));
  return 0;
}

