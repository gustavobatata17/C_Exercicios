/* 1) Escreva um programa que recebe um número real referente a uma medida em
metros e imprima esta medida em quilômetros. */

#include <stdio.h>

int main(){
    int parametro, continuar;
    float metros, quilometros;
do{
    printf("Coversor de metros para quilometros ou vice versa \n");
    printf("Se voce deseja conveter de metros para quilometros, digite 1: \n");
    printf("Se voce deseja conveter de quilometros para metros, digite 2: \n");
    scanf("%i", &parametro );
    continuar = continuar++;


      if(parametro == 1){

      printf("Digite a quantidade de metros: \n");
      scanf("%f", &metros);
      quilometros = metros /  1000;
      printf("%f metros corresponde respectivamente %.2f quilometros\n", metros, quilometros);

    } else if(parametro == 2){

      printf("Digite a quantidade de quilometros: \n");
      scanf("%f", &quilometros);
      metros = quilometros *  1000;
      printf("%.1f quilometros corresponde respectivamente %.2f metros\n", quilometros , metros);

    } else {
    printf("Digite um valor valido");

    }
    printf("Deseja Continuar\n");
    printf("1 PARA SIM \n");
    printf("0 PARA NAO \n");
    scanf("%i", &continuar);

} while(continuar == 1);

return 0;}
