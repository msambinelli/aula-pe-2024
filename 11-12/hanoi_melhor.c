#include <stdio.h>

/* Ao  invés de computar qual é  a estaca auxiliar, vamos passar o nome da 
 * estaca auxiliar como parâmetro para a função hanoi()
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
*/


/* void hanoi(char o, char d, int n) { */
/* também vou renomear as variáveis: o -> orig e d -> destino */
void hanoi(char orig, char  destino, int n, int aux) {

  if (n == 1) 
    printf("move de %c para %c\n", orig, destino);
  else {
    // char aux = other(o, d);
    // hanoi(o, aux, n - 1);
    hanoi(orig, aux, n - 1, destino);
    printf("move de %c para %c\n", orig, destino);
    //hanoi(aux, d,  n - 1);
    hanoi(aux, destino,  n - 1, orig);
  }
}

int main(void) {

  /* confira a sua solução usando esse simular de torre de Hanoi: 
     https://www.mathsisfun.com/games/towerofhanoi.html */ 
  /* PS: no simulador, a estaca de destino é a terceira */
  hanoi('a', 'c', 3, 'b');

  return 0;
}
