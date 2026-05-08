#include <stdio.h>

int main() {
    int pNum, pDen, qNum, qDen;
    int resNum, resDen;
    int a, b, temp, mdc;

    printf("Fracao p (numerador e denominador): ");
    scanf("%d %d", &pNum, &pDen);

    printf("Fracao q (numerador e denominador): ");
    scanf("%d %d", &qNum, &qDen);

    // --- Simplificação da Fracao P ---
    a = pNum; b = pDen;
    while (b != 0) { // Algoritmo de Euclides
        temp = b;
        b = a % b;
        a = temp;
    }
    mdc = a;
    pNum /= mdc;
    pDen /= mdc;

    // --- Simplificação da Fracao Q ---
    a = qNum; b = qDen;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    mdc = a;
    qNum /= mdc;
    qDen /= mdc;

    printf("\nFracoes simplificadas: p = %d/%d, q = %d/%d\n", pNum, pDen, qNum, qDen);

    // --- SOMA ---
    resNum = (pNum * qDen) + (qNum * pDen);
    resDen = pDen * qDen;
    printf("Soma: %d/%d\n", resNum, resDen);

    // --- SUBTRAÇÃO ---
    resNum = (pNum * qDen) - (qNum * pDen);
    resDen = pDen * qDen;
    printf("Subtracao: %d/%d\n", resNum, resDen);

    // --- PRODUTO ---
    resNum = pNum * qNum;
    resDen = pDen * qDen;
    printf("Produto: %d/%d\n", resNum, resDen);

    // --- DIVISAO ---
    resNum = pNum * qDen;
    resDen = pDen * qNum;
    printf("Quociente: %d/%d\n", resNum, resDen);
    return 0;
}
