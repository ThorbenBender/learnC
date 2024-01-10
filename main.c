#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int number;
  struct node *next;
} node;

int main(int argc, char *argv[]) {
  node *list = NULL;

  for (int i = 1; i < argc; i++) {
    int number = atoi(argv[i]);

    node *n = malloc(sizeof(node));

    if (n == NULL) {
      return 1;
    }
    n->number = number;
    n->next = NULL;

    n->next = list;
    list = n;
  }

  node *point = list;

  while (point != NULL) {
    printf("Node is %i\n", point->number);
    point = point->next;
  }

  point = list;
  while (point != NULL) {
    node *next = point->next;
    free(point);
    point = next;
  }
}
