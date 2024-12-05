#include <stdio.h>
#include <stdlib.h>

struct _matrix {
  int** data;
  int ncols;
  int nlines;
};

typedef struct _matrix*  Matrix;

Matrix matrix(int nlines, int ncols) {

  Matrix M = malloc(sizeof(struct _matrix)); 

  M->nlines = nlines;
  M->ncols = ncols;

  M->data  = malloc(nlines*sizeof(int*));
  for (int i = 0; i < nlines; i++)
    M->data[i] = malloc(ncols*sizeof(int));
  return M;
}

void matrix_load(Matrix M) {
  for (int i = 0; i < M->nlines; i++)
    for (int j = 0; j < M->ncols; j++)
      scanf("%d", &M->data[i][j]);
}

void matrix_print(Matrix M) {
  for (int i = 0; i < M->nlines; i++) {
    for (int j = 0; j < M->ncols; j++) 
      printf("%d, ", M->data[i][j]);
    printf("\n");
  }
}

void matrix_swap(struct _matrix** A, Matrix* B) {
  Matrix tmp = *A;
  *A = *B;
  *B = tmp;
}

void matrix_free(Matrix A) {

  for (int i = 0; i < A->nlines; i++)
    free(A->data[i]);
  free(A->data);
  free(A);
}


int main(void) {

  int nlines, ncols;

  scanf("%d %d", &nlines, &ncols);
  Matrix M = matrix(nlines, ncols);
  matrix_load(M);

  scanf("%d %d", &nlines, &ncols);
  Matrix N = matrix(nlines, ncols);
  matrix_load(N);

  printf("Matrix M\n");
  matrix_print(M);

  printf("Matrix N\n");
  matrix_print(N);

  printf("calling swap\n");
  matrix_swap(&M, &N);

  printf("Matrix M\n");
  matrix_print(M);

  printf("Matrix N\n");
  matrix_print(N);

  matrix_free(N);
  matrix_free(M);

  return 0;
}
