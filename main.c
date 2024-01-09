#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char *name = "thorben";

  char *t = malloc(strlen(name) + 1);
  if (t == NULL) {
    return 1;
  }

  strcpy(t, name);

  if (strlen(t) > 0) {
    t[0] = toupper(t[0]);
  }

  printf("Name is %s\n", name);
  printf("T is %s\n", t);

  free(t);

  return 0;
}
