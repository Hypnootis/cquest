#include <stdio.h>
#include "math.c"

#define BOOL char
#define FALSE 0
#define TRUE 1

int main()
{
  Vector myVector;
  Matrix myMatrix;

  initVector(3, &myVector);
  initMatrix(2, 2, &myMatrix);

  myVector.data[1] = 2;

  printf("Size of vector: %d\n", myVector.size);
  printf("Size of matrix: %dx%d", myMatrix.size[0], myMatrix.size[1]);

  return 0;
}
