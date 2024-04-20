#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  FILE *file;
  file = fopen("file.txt", "w");
  if (file == NULL) {
    printf("The file is not created & some filure occured");
    exit(0);
  } else {
    printf("File is created successfully");
  }
  return 0;
}
