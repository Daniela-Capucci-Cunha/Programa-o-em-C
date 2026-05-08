#include <stdio.h>
#include <math.h>

int main() {
    double r, a;
    double x, y;

    printf("Digite o raio (r): ");
    scanf("%lf", &r);
    
    printf("Digite o argumento em radianos (a): ");
    scanf("%lf", &a);

    // 2. Conversão para cartesianas
    // x = r * cos(a)
    // y = r * sen(a)
    x = r * cos(a);
    y = r * sin(a);

    printf("\n--- Resultado da Conversao ---");
    printf("\nCoordenada X: %.2f", x);
    printf("\nCoordenada Y: %.2f\n", y);

    return 0;
}
