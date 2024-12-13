#include <stdio.h>

int palindromo(char p[], int ini, int fim) {

  if (ini >= fim) 
    return 1;
  else
    return p[ini] == p[fim] && palindromo(p, ini + 1, fim - 1);
}

int main(void) {

  setbuf(stdout, NULL);
  int r = palindromo("ovo", 0, 2);
  printf("resp: %d\n", r);
  return 0;
}