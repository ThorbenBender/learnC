#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(int *a, int *b);

int main(void) {
  int x = 1;
  int y = 2;

  printf("X is %i, y is %i\n", x, y);
  swap(&x, &y);
  printf("X is %i, y is %i\n", x, y);
  return 0;
}

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}
