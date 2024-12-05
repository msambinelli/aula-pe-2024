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


Node list_push_front(Node h, int data) {

  Node new = node(data);
  new->next = h;
  return new;

}

Node list_push_back(Node p, int data) {

  if (p == NULL)
    return node(data);

  Node l = p;
  while (l->next != NULL) 
    l = l->next;
  l->next = node(data);
  return p;
}

void list_print(Node p) {
  while (p != NULL) {
    printf("%d, ", p->data);
    p = p->next;
  }
  printf("\n");
}

int main(void) {


  Node p = NULL;
  p = list_push_back(p, 8);
  p = list_push_back(p, 18);
  p = list_push_back(p, 1);
  p = list_push_back(p, 19);
  list_print(p);

  return 0;
}
