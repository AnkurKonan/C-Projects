
#include <stdio.h>
enum week { Mon, Tue, Wed, Thur, Fri, Sat, Sun };
int main() {
  enum week day;
  day = Wed;
  printf("%d", day);
  return 0;
}

#include <stdio.h>
enum State { Working = 1, Failed = 0, Freezed = 0 };
int main() {
  printf("%d, %d, %d", Working, Failed, Freezed);
  return 0;
}
