#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

float *createArray(int size);

void freePointerMemory(float *p) {
  free(p);
  p = NULL;
}

int main() {

  float *array = createArray(SIZE);

  for (int i = 0; i < SIZE; i++) {
    *(array + i) = i + 1;
  }

  for (int i = 0; i < SIZE; i++) {
    printf("%f\n", *(array + i));
  }

  freePointerMemory(array);

  return 0;
}

float *createArray(int size) {
  float *array = (float *)malloc(size * sizeof(float));

  if (array == NULL) {
    printf("Allocated memory error\n");
    exit(1);
  }

  return array;
}