#include <stdio.h>
#include "math.c"

#define BOOL char
#define FALSE 0
#define TRUE 1

int main()
{

  Matrix* testMatrix = createMatrix(2, 1);

  printf("Matriisin ensimmäinen arvo: %d", testMatrix->data[0][0]);
  return 0;
}
