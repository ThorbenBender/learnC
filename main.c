#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>

bool compare_string(char *s, char *t) {
  if (strlen(s) != strlen(t)) {
    return false;
  }

  int i = 0;

  while (s[i] != '\0' && t[i] != '\0') {
    if (s[i] != t[i]) {
      return false;
    }
    i++;
  }
  return true;
}

typedef struct {
  char *name;
  int age;
} person;

int main(void) {
  char t[20];
  char s[20];

  fgets(t, sizeof(t), stdin);
  fgets(s, sizeof(s), stdin);

  bool result = compare_string(s, t);
  printf("Both strings are %s", result ? "equal" : "not equal");
}
