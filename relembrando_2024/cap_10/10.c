#include <stdio.h>

int main() {
  int a, *b, **c, ***d;

  scanf("%d", &a);

  b = &a;
  c = &b;
  d = &c;

  printf("a = %d, b = %d, c = %d, d = %d\n", a, *b * 2, **c * 3, ***d * 4);

  return 0;
}