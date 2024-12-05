#include <stdio.h>
#include <stdlib.h>

typedef struct node* List;

struct node {
  int data;
  List next;
};

List node(int data) {
  struct node* p = malloc(sizeof(struct node));
  p->data = data;
  p->next = NULL;
}

void node_print(List l) {
  printf("end: %u\n", l);
  printf("data: %d\n", l->data);
  printf("next: %u\n", l->next);
  printf("\n\n");
}

List list_push_back(List l, int data) {

  List new = node(data);
  if (l == NULL)
    return new;

  List p = l;
  while (p->next != NULL)
    p = p->next;

  p->next = new;
  return l;
}

List list_push_front(List l, int data) {

  List new = node(data);
  new->next = l;
  return new;
}

void list_print(List l) {

  List p = l;
  while (p != NULL) {
    node_print(p);
    p = p->next;
  }
}

int main(void) {

  List l = NULL;
  l = list_push_front(l, 7);
  l = list_push_front(l, 17);
  l = list_push_front(l, 22);

  list_print(l);

  return 0;
}
