#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 50

char *createArray(char size) {
  char *array = (char *)malloc(size * sizeof(char));

  if (array == NULL) {
    printf("Allocated memory error\n");
    exit(1);
  }

  return array;
}

void freePointerMemory(char *p) {
  free(p);
  p = NULL;
}

int isSubstring(char *firstString, char *secondString) {
  int firstStringSize = strlen(firstString);
  int secondStringSize = strlen(secondString);

  if (firstStringSize < secondStringSize) {
    return 0;
  }

  for (int i = 0; i < firstStringSize; i++) {
    if ((firstStringSize - i) < secondStringSize) {
      return 0;
    }

    int equalitiesCount = 0;

    for (int j = 0, firstStringPos = i; j < secondStringSize;
         j++, firstStringPos++) {
      if (*(secondString + j) == *(firstStringPos + firstString)) {
        equalitiesCount++;
      }
    }

    if (equalitiesCount == secondStringSize) {
      return 1;
    }
  }

  return 0;
}

int main() {
  char *firstString = createArray(SIZE);
  char *secondString = createArray(SIZE);

  printf("Enter first string: ");
  fgets(firstString, SIZE, stdin);
  printf("Enter second string: ");
  fgets(secondString, SIZE, stdin);

  firstString[strcspn(firstString, "\n")] = 0;
  secondString[strcspn(secondString, "\n")] = 0;

  if (isSubstring(firstString, secondString)) {
    printf("%s is substring of %s\n", secondString, firstString);
  } else {
    printf("%s isn't substring of %s\n", secondString, firstString);
  }

  freePointerMemory(firstString);
  freePointerMemory(secondString);

  return 0;
}