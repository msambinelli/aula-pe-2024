
int palindromo(char p[], int ini, int fim) {

  if (ini >= fim) 
    return 1;
  else
    return p[ini] == p[fim] && palindromo(p, ini + 1, fim - 1);
}
