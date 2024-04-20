#include <stdio.h>
#include <string.h>

struct code_of_detective {
  int first;
  int second;
  int third;
  char last;
};

int main() {
  printf("Size of date is %lu bytes", sizeof(struct code_of_detective));
  struct code_of_detective code = {0, 0, 7, 'j'};
  printf("James bond code is %d%d%d%c", code.first, code.second, code.third,
         code.last);
}

//
