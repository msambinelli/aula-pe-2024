#include <stdio.h>

void foo(int x) {

  printf("entrando em foo(%d)\n", x);
  foo(x + 1);
  printf("saindo de foo(%d)\n", x);

}

int main(void) {

  setbuf(stdout, NULL);
  foo(1);
  return 0;
}
