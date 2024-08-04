#include <stdlib.h>

typedef struct int** Matrix;


Matrix* createMatrix(int columns, int rows) {
  Matrix* _matrix = (Matrix*) malloc(sizeof(Matrix));
  for (int i=0; i=rows; i++) {
    for (int j=0; j=columns; j++) {
      _matrix->data[i][j] = 0;
    }
  }
  return _matrix;
}
