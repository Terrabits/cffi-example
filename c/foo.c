#include <stdio.h>

void foo(char *string, const int LENGTH) {
  if (LENGTH >= 13) {
    sprintf(string, "Hello world!");
  }
  else {
    string[0] = '\0';
  }
}
