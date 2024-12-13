#include <stdio.h>

char other(char o, char d) {
  if (o == 'a') {
    if (d == 'b')
      return 'c';
    else
      return 'b';
  } else if (o == 'b') {
    if (d == 'a')
      return 'c';
    else 
      return 'a';
  } else {
    // o = 'c'
    if (d == 'a')
      return 'b';
    else 
      return 'a';
  }
}

void hanoi(char o, char d, int n) {

  if (n == 1) 
    printf("move de %c para %c\n", o, d);
  else {
    char aux = other(o, d);
    hanoi(o, aux, n - 1);
    printf("move de %c para %c\n", o, d);
    hanoi(aux, d,  n - 1);
  }
}

int main(void) {

  hanoi('a', 'b', 3);

  return 0;
}
