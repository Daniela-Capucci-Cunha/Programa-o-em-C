#include <stdio.h>
#include <math.h>

int main() {
    // Variáveis para o número z
    double zReal, zImag;
    // Variáveis para o número w
    double wReal, wImag;
    
    // Variáveis para os resultados
    double resReal, resImag, modZ, modW;

    // 1. Leitura do número z
    printf("Digite a parte real de z: ");
    scanf("%lf", &zReal);
    printf("Digite a parte imaginaria de z: ");
    scanf("%lf", &zImag);

    // 2. Leitura do número w
    printf("Digite a parte real de w: ");
    scanf("%lf", &wReal);
    printf("Digite a parte imaginaria de w: ");
    scanf("%lf", &wImag);

    // --- SOMA ---
    resReal = zReal + wReal;
    resImag = zImag + wImag;
    printf("\nSoma: %.2f + %.2fi", resReal, resImag);

    // --- SUBTRAÇÃO ---
    resReal = zReal - wReal;
    resImag = zImag - wImag;
    printf("\nSubtracao: %.2f + %.2fi", resReal, resImag);

    // --- PRODUTO ---
    // A fórmula é: (a+bi)*(c+di) = (ac - bd) + (ad + bc)i
    resReal = (zReal * wReal) - (zImag * wImag);
    resImag = (zReal * wImag) + (zImag * wReal);
    printf("\nProduto: %.2f + %.2fi", resReal, resImag);

    // --- MÓDULOS ---
    modZ = sqrt((zReal * zReal) + (zImag * zImag));
    modW = sqrt((wReal * wReal) + (wImag * wImag));
    
    printf("\nModulo de z: %.2f", modZ);
    printf("\nModulo de w: %.2f\n", modW);

    return 0;
}
