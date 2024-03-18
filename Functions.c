int sum(int a, int b) { return a + b; }
int main() {
  int add = sum(10, 20);
  printf("Sum is: %d", add);
  return 0;
}

int main() {
  int number = 30;
  int squareroot = sqrt(number);
  printf("The square root of %d is %d", number, squareroot);
}

//same output will occur
void swap(int a, int b) {
  int c = a;
  a = b;
  b = c;
}
int main() {
  int a = 3, b = 2;
  printf("Before swap: %d, %d\n", a, b);
  swap(a, b);
  printf("After swap: %d, %d", a, b);
  return 0;
}

//this time it will swap
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}
int main() {
  int a = 3, b = 2;
  printf("Before swap Value of var1 and var2 is: %d, %d\n", a, b);
  swap(&a, &b);
  printf("After swap Value of var1 and var2 is: %d, %d", a, b);
  return 0;
}
 //pass by value
void func(int a, int b) {
  a += b;
  printf("In func a = %d b = %d\n", a, b);
}
int main(void) {
  int c = 5, d = 7;
  func(c, d);
  printf("In main c = %d d = %d\n", c, d);
  return 0;
}
