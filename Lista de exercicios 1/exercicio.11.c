#include <stdio.h>

int main() {
  int x=10, soma=0,i;

  while(x>=3){
  printf("%d ", x);
  soma += x;
  x--;
  } 
  printf("\nSoma = %d\n", soma);
  
  soma = 0;
  for(i=10;i>=3;i--){
  printf("%d ", i);
  soma += i;
  } 
  printf("\nSoma = %d\n", soma);
  
  return 0;
}
