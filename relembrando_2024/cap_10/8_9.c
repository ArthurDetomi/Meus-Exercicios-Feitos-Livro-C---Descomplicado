#include <stdio.h>

#define SIZE 5

void fillArray(int *arr, int n, int value) {
  for (int i = 0; i < n; i++) {
    *(arr + i) = value;
  }
}

void printArray(int *arr, int n) {
  for (int i = 0; i < n; i++) {
    printf("%d\n", *(arr + i));
  }
}

int main() {
  int arr[SIZE];

  fillArray(arr, SIZE, 3);

  printArray(arr, SIZE);

  return 0;
}
