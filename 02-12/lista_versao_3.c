#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node* next;
};

typedef struct node* Node;

Node node(int data) {
  Node p = malloc(sizeof(struct node));
  p->data = data;
  p->next = NULL;
  return p;
}

void node_print(Node p) {
  printf("end: %u\n", p);
  printf("data: %d\n", p->data);
  printf("next: %u\n", p->next);
}


typedef struct _list {
  Node head;
  Node tail;
  int nelements;
}* List;


List list(void) {
  List l = malloc(sizeof(struct _list));
  l->head = NULL;
  l->tail = NULL;
  l->nelements = 0;
  return l;
}

void list_push_front(List l, int data) {

  Node t = node(data);
  if (l->nelements == 0) {
    l->head = t;
    l->tail = l->head;
  } else {
    t->next = l->head;
    l->head = t;
  }
  l->nelements += 1;
}

void list_push_back(List l, int data) {

  Node t = node(data);
  if (l->nelements == 0) {
    l->head = t;
    l->tail = l->head;
  } else {
    l->tail->next = t;
    l->tail = t;
  }
  l->nelements += 1;
}

void list_print(List l) {
  Node p = l->head;
  while (p != NULL) {
    printf("%d, ", p->data);
    p = p->next;
  }
  printf("\n");
}

int main(void) {


  List p = list();
  list_push_back(p, 8);
  list_push_back(p, 18);
  list_push_back(p, 1);
  list_push_back(p, 19);
  list_print(p);

  return 0;
}
