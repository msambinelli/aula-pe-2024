#include <stdio.h>

int square(int x) {
  
  printf("entrei em square(%d)\n", x);
  printf("saindo de square(%d)\n", x);
  return x * x;

}

int bar(int y) {

  printf("entrei em bar(%d)\n", y);
  int a = 0;
  for (int i = 0; i < y; i++)
    a += square(i);
  printf("saindo do bar(%d)\n", y);
  return a;
}

int foo(int x) {

  printf("entrei em foo(%d)\n", x);
  int z = bar(x);
  printf("z = %d\n", z);
  printf("saindo de foo(%d)\n", x);

}

int main(void) {

  setbuf(stdout, NULL);

  printf("Antes de foo\n");
  int x = foo(3);
  printf("depois de foo\n");

  return 0;
}
