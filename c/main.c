#include <stdio.h>
#include "foo.h"

int main(void) {
  puts("This is a shared library test...");

  const int LENGTH = 50;
  char string[LENGTH];
  foo(string, LENGTH);
  puts(string);

  return 0;
}
