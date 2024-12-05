#ifndef NODE_H
#define NODE_H

#include "list_conf.h"

typedef struct _node * Node;

struct _node {
  UserData data;
  struct _node* next;
};

Node node(int data);
void node_print(Node l);

#endif
