#include <stdio.h>

void printLargestAddress(int *a, int *b);

int main() {
  int a = 2, b = 0;

  printLargestAddress(&a, &b);

  return 0;
}

void printLargestAddress(int *a, int *b) {
  if (a > b) {
    printf("A is the largest address: %p\n", &a);
  } else {
    printf("B is the largest address: %p\n", &b);
  }
}