/* 3) Leia 2 notas, calcule e exiba a média ponderada dessas notas. Considere que a
nota1 tem peso 6 e a nota2 tem peso 4. */

#include <stdio.h>

int main(){
    float nota1,nota2, media;
    int continuar = continuar++;
    do{
    printf("Calculadora de media ponderada\n");
    printf("Pesos 6 e 4 respectivamente\n");
    printf("Digite a primeira nota: \n");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: \n");
    scanf("%f", &nota2);

    media = (nota1 * 0.6) + (nota2 * 0.4);

     printf("a media corespondente e: %.2f\n", media);

    printf("Deseja Continuar\n");
    printf("1 PARA SIM \n");
    printf("0 PARA NAO \n");
    scanf("%i", &continuar);

    } while(continuar == 1);

return 0; }
