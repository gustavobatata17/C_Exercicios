/* 5) Escreva um programa que, dado o valor da conta de uma refeição realizada em um
restaurante, calcule a comissão do garçom (10% do valor da conta) e exiba: a comissão
do garçom e o total, todos em reais.*/

#include <stdio.h>

int main(){
  int continuar = continuar++;
  float conta, comissao, total;
  do{
  printf("Calculador de gojeta para meu mano gracom\n");
  printf("Digite o valor da conta em R$:\n ");
  scanf("%f", &conta);
  printf("Digite o valor da comissao:\n ");
  scanf("%f", &comissao);

  total = (conta * (comissao/100.0)) + conta;
  printf("A comissao do meu mano gracom e %.2f R$\n", comissao);
  printf("ao total fica %.2f R$\n", total);

  printf("Deseja Continuar\n");
  printf("1 PARA SIM \n");
  printf("0 PARA NAO \n");
  scanf("%i", &continuar);

  } while(continuar == 1);
return 0;
}
