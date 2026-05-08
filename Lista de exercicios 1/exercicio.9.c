#include <stdio.h>

int main() {
  int numero;
  printf("Digite um numero:");
  scanf("%d", &numero);
  
  printf("%d ", numero);
  while(numero<100){
  numero = numero * 3;
  printf("%d ", numero);
  } 
  return 0;
}
