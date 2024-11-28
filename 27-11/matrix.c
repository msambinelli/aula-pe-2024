#include <stdio.h>
#include <stdlib.h>

int** matrix(int nlines, int ncols) {
  int **M = malloc(nlines*sizeof(int*));
  for (int i = 0; i < nlines; i++)
    M[i] = malloc(ncols*sizeof(int));
  return M;
}

void matrix_load(int** M, int nlines, int ncols) {
  for (int i = 0; i < nlines; i++)
    for (int j = 0; j < ncols; j++)
      scanf("%d", &M[i][j]);
}

void matrix_print(int** M, int nlines, int ncols) {
  for (int i = 0; i < nlines; i++) {
    for (int j = 0; j < ncols; j++) 
      printf("%d, ", M[i][j]);
    printf("\n");
  }
}

void matrix_swap(int*** A, int*** B) {
  int** tmp = *A;
  *A = *B;
  *B = tmp;
}

int main(void) {

  int mlines, mcols;
  scanf("%d %d", &mlines, &mcols);
  int** M = matrix(mlines, mcols);
  matrix_load(M, mlines, mcols);

  int nlines, ncols;
  scanf("%d %d", &nlines, &ncols);
  int** N = matrix(nlines, ncols);
  matrix_load(N, nlines, ncols);

  printf("Matrix M\n");
  matrix_print(M, mlines, mcols);

  printf("Matrix N\n");
  matrix_print(N, nlines, ncols);

  printf("calling swap\n");
  matrix_swap(&M, &N);

  printf("Matrix M\n");
  matrix_print(M, nlines, ncols);

  printf("Matrix N\n");
  matrix_print(N, mlines, mcols);

  return 0;
}
