/* 9 - Escreva um algoritmo para ler uma temperatura em graus Celsius, calcular e escrever
o valor correspondente em graus Fahrenheit. */

#include <stdio.h>

int main(){
   int parametro;
   float celcius, fah;
   printf("Covertor de temperatura\n");
   printf("1 DE CELCIUS PARA FHARENHEIT\n");
   printf("2 DE FHARENHEIT PARA CELSIUS\n");
   scanf("%i", &parametro);

   if(parametro == 1){
     printf("Digite a temperatura em celsius:\n");
     scanf("%f", &celcius);
     fah = (celcius * 9/5.0) + 32;
     printf("%.2f celcius em fharenheint é %.2f\n", celcius, fah);
   }
   if(parametro == 2){
     printf("Digite a temperatura em fharenheint:\n");
     scanf("%f", &fah);
     celcius = (fah - 32) * 5/9;
     printf("%.2f fharenheint em celcius  é %.2f\n", fah, celcius);
   }



return 0; }
