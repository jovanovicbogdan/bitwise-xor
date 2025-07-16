#include <stdio.h>

int main() {
  int x = 5;
  int y = 6;

  printf("x=%d\n", x);
  printf("y=%d\n", y);

  printf("Swapping 'x' and 'y' in place...\n");

  x = x ^ y;
  y = y ^ x;
  x = x ^ y;

  printf("x=%d\n", x);
  printf("y=%d\n", y);

  return 0;
}
