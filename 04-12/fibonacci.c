#include <stdio.h>

int fib(int n) {

  if (n < 2) 
    return 1;
  else {
    int fnminus1 = fib(n - 1);
    int fnminus2 = fib(n - 2);
    return fnminus1 + fnminus2;
  } 

}

int main(void) {
  setbuf(stdout, NULL);

  pr

  return 0;
}
