#include <stdio.h>

int main() {
  int num, soma;
  printf("Digite um numero de até tres algarismos:");
  scanf("%d", &num);

  soma = (num%10) + (num/10%10) + (num/100);

  printf("A soma dos algarismos de %d e: %d", num, soma);

  return 0;
}
