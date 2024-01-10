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
}
