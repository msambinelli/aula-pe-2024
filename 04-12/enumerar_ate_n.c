#include <stdio.h>


void seq(int n) {

  if (n == 1)  // caso base
    printf("1\n");
  else { // caso geral
    seq(n - 1); // usando solucao problema menor
    printf("%d\n", n);
  }
}

int main(void) {

  setbuf(stdout, NULL);
  seq(5);
  return 0;
}
