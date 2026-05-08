#include <stdio.h>

int main() {
  float R1, R2, r_equivalente;
  do {
        printf("Digite o valor de R1 (ou 0 para sair): ");
        scanf("%f", &R1);

        if (r1 == 0) {
            break; 
        }

        printf("Digite o valor de R2 (ou 0 para sair): ");
        scanf("%f", &r2);

        if (r2 == 0) {
            break;
        }

        r_equivalente = (R1 * R2) / (R1 + R2);

        printf("Resistencia Equivalente: %.2f Ohms\n", r_equivalente);

    } while (r1 != 0 && r2 != 0);

    printf("\nPrograma encerrado.\n");

    return 0;
}
