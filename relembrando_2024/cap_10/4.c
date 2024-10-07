#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

float *createArray(int size);

void freePointerMemory(float *p) {
  free(p);
  p = NULL;
}

int main() {

  float *array = createArray(pow(SIZE, 2));

  for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j < SIZE; j++) {
      *(array + (i * SIZE + j)) = i + 1 + j;
    }
  }

  for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j < SIZE; j++) {
      printf("%f\n", *(array + (i * SIZE + j)));
    }
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