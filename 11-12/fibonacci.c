#include <stdio.h>

int fib(int n) {

  if (n <= 2)  // caso base
    return 1;
  else { // caso geral 
    int result = fib(n - 1) + fib(n - 2);
    return result;
  } 
}

int main(void) {
  setbuf(stdout, NULL);

  int m = 5;
  printf("Fib(%d) = %d\n", m, fib(m));

  return 0;
}
