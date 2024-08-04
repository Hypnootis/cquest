#include <stdlib.h>

typedef struct {
  int size[2];
  int** data;
} Matrix;

void initMatrix(int rows, int columns, Matrix* m) {
  m->data = (int**)malloc(sizeof(int) * rows);
  for (int i=0; i < rows; i++) {
    m->data[i] = (int*)malloc(sizeof(int) * columns);
  }

  for (int i=0; i < rows; i++) {
    for (int j=0; j < columns; j++) {
      m->data[i][j] = 0;
    }
  }

  m->size[0] = columns;
  m->size[1] = rows;

}

typedef struct {
  int size;
  int* data;
} Vector;

void initVector(int size, Vector* v) {
  v->size = size;
  v->data = (int*) malloc(sizeof(int) * size);
  for (int i=0; i < size; i++) {
    v->data[i] = 0;
  }
}
