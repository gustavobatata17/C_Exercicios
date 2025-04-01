/* 7) Faça um programa que encontre as raízes de uma equação do segundo grau: */
#include <stdio.h>
#include <math.h>
int main(){
    int A, B, C, X1, X2, delta;
    printf("----- Calculadora de Baskara -----\n");
    printf("Digite o valor de a:\n");
    scanf("%i", &A);
    printf("Digite o valor de b:\n");
    scanf("%i", &B);
    printf("Digite o valor de c:\n");
    scanf("%i", &C);

    delta = (B * B) - (4 * A * C);
    X1 = (-B + sqrt(delta)) / 2*A;
    X2 = (-B - sqrt(delta)) / 2*A;

    printf("O valor de X1 e %i\n", X1);
    printf("O valor de X2 e %i\n", X2);



return 0; }
