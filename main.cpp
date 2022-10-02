#include <cstdio>
#include <iostream>

void spiral(int size) {
  int aSpiral[size][size];
  int value = 1;
  for (int i = 0, j = size - 1; i < j; i++, j--) {

    for (int k = i; k < j; k++) {
      aSpiral[i][k] = value;
      printf(".%i.", aSpiral[i][k]);
      value++;
    }

    for (int k = i; k < j; k++) {
      aSpiral[k][j] = value;
      printf("!%i!", aSpiral[k][j]);
      value++;
    }

    for (int k = j; k > i; k--) {
      aSpiral[j][k] = value;
       printf("*%i*", aSpiral[j][k]) ;
      value++;
    }

    for (int k = j; k > i; k--) {
      aSpiral[k][i] = value;
       printf("^%i^", aSpiral[k][i]) ;
      value++;
    }
  }

  if (size % 2 == 1) {
    aSpiral[ size/2 ][ size/2 ] = value;
     printf("%i", aSpiral[ size/2 ][ size/2 ] ) ;
  }
}

int main() { spiral(5); }