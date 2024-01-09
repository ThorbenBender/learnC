#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  int *x;
  int *y;

  x = malloc(sizeof(int));
  y = malloc(sizeof(int));

  *x = 42;
  *y = 13;

  y = x;

  *y = 13;

  printf("X is %i and Y is %i", *x, *y);

  free(x);
  free(y);
  return 0;
}
