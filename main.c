#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  int *x = malloc(3 * sizeof(int));

  if (x == NULL) {
    return 1;
  }

  x[0] = 1;
  x[1] = 2;
  x[2] = 3;

  for (int i = 0; i < 3; i++) {
    printf("%i\n", x[i]);
  }

  free(x);

  return 0;
}
