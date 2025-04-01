/*8 - Faça um algoritmo que receba um valor em reais e mostre quanto o mesmo representa nas
seguintes moedas: dólar, euro, libra e peso.
A taxa de conversão é:
• 1 dólar = R$ 5.02.
• 1 euro = R$ 5.37
• 1 libra = R$ 5.92
• 1 peso = R$ 0.079 */

#include <stdio.h>

int main(){
  int parametro, continuar = continuar++;
  float reais, total, dolar = 5.02, euro = 5.37, libra = 5.92, peso = 0.079;
  do{
  printf("Coversor de reais em:\n");
  printf("1 para dolar\n");
  printf("2 para euro\n");
  printf("3 para libra\n");
  printf("4 para peso\n");
  scanf("%i", &parametro);

  if(parametro == 1){
  printf("Digite o valor em reais: ");
  scanf("%f", &reais);
  total = reais / dolar;
  printf("O valor %.2f reais em dolares e %.2f dolares\n", reais, total);
  }

  if(parametro == 2){
  printf("Digite o valor em reais: ");
  scanf("%f", &reais);
  total = reais / euro;
  printf("O valor %.2f reais em dolares e %.2f dolares\n", reais, total);
  }

  if(parametro == 3){
  printf("Digite o valor em reais: ");
  scanf("%f", &reais);
  total = reais / libra;
  printf("O valor %.2f reais em dolares e %.2f dolares\n", reais, total);
  }

  if(parametro == 4){
  printf("Digite o valor em reais: ");
  scanf("%f", &reais);
  total = reais / peso;
  printf("O valor %.2f reais em dolares e %.2f dolares\n", reais, total);
  }

    printf("Deseja Continuar\n");
    printf("1 PARA SIM \n");
    printf("0 PARA NAO \n");
    scanf("%i", &continuar);
  } while(continuar == 1);

return 0;}
