//Using functions
#include <stdio.h>
#include <string.h>

void pointer_function() {
  int variable = 1200;
  int *ptr;
  ptr = &variable;
  printf("ptr is %p \n", ptr);
  printf("variable is %d \n", variable);
  printf("*ptr is %d \n", *ptr);
}
int main() {
  pointer_function();
  return 0;
}

//Normal 
#include <stdio.h>
#include <string.h>

int main() {
  int variable = 1200;
  int *ptr;
  ptr = &variable;
  printf("ptr is %p \n", ptr);
  printf("variable is %d \n", variable);
  printf("*ptr is %d \n", *ptr);
}
