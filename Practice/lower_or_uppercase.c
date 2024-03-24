#include <stdio.h>
#include <string.h>
int main() {
  char ch;
  printf("Enter the character :\n");
  scanf("%c", &ch);
  if (ch >= 65 && ch <= 90) {
    printf("%c is alphabet and uppercase", ch);
  } else if (ch >= 97 && ch <= 122) {
    printf("%c is alphbet and lowercase", ch);
  }
  return 0;
}
