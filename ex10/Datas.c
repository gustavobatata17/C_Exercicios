/*10 - Implemente um programa que recebe seis valores inteiros positivos D0, M0 e A0; D1, M1
e A1. Esses valores correspondem a duas datas diferentes, em que D, M e A se referem a dia,
mês e ano, respectivamente. O programa deverá, então, calcular a diferença das datas em dias.
Para isso, considere que um ano tem 360 dias, um mês tem 30 dias e a segunda data informada
como entrada sempre será posterior à primeira.*/

#include <stdio.h>

int main(){

    float dia1, dia2, mes1, mes2, ano1, ano2, data1, data2, diferenca;
    printf("***** Calculador da diferença de duas datas *****\n");
    printf("Dia:\n");
    scanf("%f", &dia1);
    printf("Mes:\n");
    scanf("%f", &mes1);
    printf("Ano:\n");
    scanf("%f", &ano1);

    printf("Outro ano:\n");
    printf("Dia:\n");
    scanf("%f", &dia2);
    printf("Mes:\n");
    scanf("%f", &mes2);
    printf("Ano:\n");
    scanf("%f", &ano2);

    data1 = dia1 + (mes1 * 30) + (ano1 * 360);
    data2 = dia2 + (mes2 * 30) + (ano2 * 360);
    diferenca = data1 - data2;

    printf("A distacia e de %f", diferenca);
return 0;
}
