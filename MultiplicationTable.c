#include <stdio.h>

int main(){

  int i, n;

  printf("\033[1mMultiplication table\033[0m\n");
  printf("\nEnter a number: ");
  scanf("%i", &n);

  for (i=1; i<=10; i++) {
    printf("\n%ix%i: %i", n, i, i*n);
  }  
}
