#include <stdio.h>

int main() {
  int conta;
  printf("Digite o valor da conta:");
  scanf("%d", &conta);
  printf("Para pagar R$ %d, voce precisa de:\n",conta);

  if(conta/50>0) printf("%d nota(s) de R$ 50\n", conta/50);
  conta %= 50;

  if(conta/20>0) printf("%d nota(s) de R$ 20\n", conta/20);
  conta %= 20;

  if(conta/10>0) printf("%d nota(s) de R$ 10\n", conta/10);
  conta %= 10;

  if(conta/5>0) printf("%d nota(s) de R$ 5\n", conta/5);
  conta %= 5;

  if(conta/2>0) printf("%d nota(s) de R$ 2\n", conta/2);
  conta %= 2;

  if(conta>0) printf("%d nota(s) de R$ 1", conta);

  return 0;
}
