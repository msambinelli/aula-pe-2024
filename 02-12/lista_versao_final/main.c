#include <stdio.h>
#include <stdlib.h>

#include "list.h"

int main(void) {

  List l = list();
  
  list_push_back(l, 7);
  list_push_back(l, 17);
  list_push_back(l, 22);
  list_print(l);

  return 0;
}
