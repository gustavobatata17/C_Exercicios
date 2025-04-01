/* 4) Leia 2 notas, calcule e exiba a média ponderada dessas notas. O peso de cada uma
das notas deverá ser determinado pelo usuário. */

#include <stdio.h>

int main(){
    float peso1,peso2,nota1,nota2, media;
    int continuar = continuar++;
    do{
    printf("Calculadora de media ponderada\n");
    printf("Digite o valor do peso 1:\n");
    scanf("%f", &peso1);
    printf("Digite o valor do peso 1:\n");
    scanf("%f", &peso2);
    printf("Digite a primeira nota: \n");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: \n");
    scanf("%f", &nota2);

    media = nota1 * (peso1/100.0) + nota2 * (peso2/100.0);

     printf("a media corespondente e: %.2f\n", media);

    printf("Deseja Continuar\n");
    printf("1 PARA SIM \n");
    printf("0 PARA NAO \n");
    scanf("%i", &continuar);

    } while(continuar == 1);

return 0; }
