#include <stdio.h>

int fatorial(int n) {
  if (n == 0)
    return 1;
  else  {
    int r = fatorial (n - 1);
    return r * n;
  }
}

int main(void) {
  setbuf(stdout, NULL);
  printf("%d\n", fatorial(3));
  return 0;
}
