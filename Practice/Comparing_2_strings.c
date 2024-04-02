//By using strcmp function
#include <stdio.h>
#include <string.h>
int main() {
  char str1[20];
  int value;
  char str2[20];
  printf("Enter first string: ");
  scanf("%s", str1);
  printf("Enter second string: ");
  scanf("%s", str2);
  value = strcmp(str1, str2);
  if (value == 0) {
    printf("Strings are same");
  } else {
    printf("Strings are not same");
  }
}

//Without using strcmp function & doing everyhting manually
#include <stdio.h>
#include <string.h>
int compare_strings(char[], char[]);
int main() {
  char str1[20];
  int value;
  char str2[20];
  printf("Enter first string: ");
  scanf("%s", str1);
  printf("Enter second string: ");
  scanf("%s", str2);
  value = compare_strings(str1, str2);
  if (value == 0) {
    printf("Strings are same");
  } else {
    printf("Strings are not same");
  }
}
int compare_strings(char a[], char b[]) {
  int flag = 0, i = 0;
  while (a[i] != '\0' && b[i] != '\0') {
    if (a[i] != b[i]) {
      flag = 1;
      break;
    }
    i++;
  }
  if (flag == 0) {
    return 0;
  } else
    return 1;
}
