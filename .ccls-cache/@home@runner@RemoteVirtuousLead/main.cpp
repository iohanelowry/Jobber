#include <cstdio>
#include <iostream>

void spiral(int size) {
  int a[size][size];
  int value = 1;
  for (int i = 0, j = size - 1; i < j; i++, j--) {

    for (int k = i; k < j; k++) {
      a[i][k] = value;
      printf(".%i.", a[i][k]);
      value++;
    }

    for (int k = i; k < j; k++) {
      a[k][j] = value;
      printf("!%i!", a[k][j]);
      value++;
    }

    for (int k = j; k > i; k--) {
      a[j][k] = value;
       printf("*%i*", a[j][k]) ;
      value++;
    }

    for (int k = j; k > i; k--) {
      a[k][i] = value;
       printf("^%i^", a[k][i]) ;
      value++;
    }
  }

  if (size % 2 == 1) {
    a[ size/2 ][ size/2 ] = value;
     printf("%i", a[ size/2 ][ size/2 ] ) ;
  }
}

int main() { spiral(2); }