#include <stdlib.h>
#include <stdio.h>

#include "list.h"
#include "node.h"

struct _list {
  Node head;
  Node tail;
  int nelements;
};

List list(void) {
  List l = malloc(sizeof(struct _list));
  l->head = NULL;
  l->tail = NULL;
  l->nelements = 0;
  return l;
}

void list_push_back(List l, UserData data) {

  Node p = node(data);

  if (l->tail == NULL) {
    l->head = p;
    l->tail = p;
  } else {
    l->tail->next = p;
    l->tail = p;
  }

  l->nelements += 1;
}

void list_push_front(List l, UserData data) {

  Node p = node(data);

  if (l->head == NULL) {
    l->head = p;
    l->tail = p;
  } else {
    p->next = l->head;
    l->head = p;
  }

  l->nelements += 1;
}

void list_print(List l) {

  Node p = l->head;
  while (p != NULL) {
    node_print(p);
    p = p->next;
  }
}
