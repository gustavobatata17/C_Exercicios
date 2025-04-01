/*
Implemente um programa que recebe um valor real referente a um raio R e calcula:
• O perímetro do circulo de raio R.
• A área do circulo de raio R.
Considere π = 3.14
*/
#include <stdio.h>

int main(){

    int continuar;
    float pi = 3.14, raio, perimetro,area;
    do{
    printf("Calculadora de perimetro e area");
    printf("Digite o valor do raio: ");
    scanf("%f", &raio);
    continuar = continuar + 1;

    perimetro = 2 * pi * raio;
    area = pi * ( raio*raio );

    printf("O perimetro correspondente e: %.2f\n", perimetro);
    printf("A area correspondente e: %.2f\n", area);

    printf("Deseja Continuar\n");
    printf("1 PARA SIM \n");
    printf("0 PARA NAO \n");
    scanf("%i", &continuar);

    } while(continuar == 1);

return 0;}
