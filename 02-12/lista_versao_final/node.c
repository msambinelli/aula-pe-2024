#include <stdlib.h>
#include <stdio.h>

#include "node.h"

Node node(int data) {
  Node p = malloc(sizeof(struct _node));
  p->data = data;
  p->next = NULL;
}

void node_print_debug(Node l) {
  printf("end: %u\n", l);
  printf("data: %d\n", l->data);
  printf("next: %u\n", l->next);
  printf("\n\n");
}

void node_print(Node l) {
  printf("%d, ", l->data);
}

