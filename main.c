#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int number;
  struct node *next;
} node;

int main() {
  node *list = NULL;
  node *n = malloc(sizeof(node));
  n->number = 1;
  n->next = NULL;
  list = n;
  n = malloc(sizeof(node));
  n->number = 2;
  n->next = list;
  list = n;

  node *point = list;
  while (point != NULL) {
    printf("The node value is %i\n", point->number);
    point = point->next;
  }
}
