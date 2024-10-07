#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int *createArray(int size) {
  int *array = (int *)malloc(size * sizeof(int));

  if (array == NULL) {
    printf("Allocated memory error\n");
    exit(1);
  }

  return array;
}

void freePointerMemory(int *p) {
  free(p);
  p = NULL;
}

int main() {
  int *array = createArray(SIZE);

  for (int i = 0; i < SIZE; i++) {
    scanf("%d", (array + i));
  }

  for (int i = 0; i < SIZE; i++) {
    if (*(array + i) % 2 == 0) {
      printf("Value = %d and Address = %p\n", *(array + i), (array + i));
    }
  }

  freePointerMemory(array);
  return 0;
}