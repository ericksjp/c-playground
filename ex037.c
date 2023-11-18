/* 
    37. Escreva um programa que leia um número positivo entre 1 e 9999 e calcule o valor da 
    unidade de milhar, da centena, da dezena e da unidade.  
*/
#include <stdio.h>

int main(){
    printf("<<< exe037 >>>\n\n");
    int numero,milhar,centena,dezena,unidade,reverso;

    printf("Digite um inteiro entre 1 a 9999: ");
    scanf("%d",&numero);

    milhar = numero/1000;
    int resto = numero%1000;
    centena = resto/100;
    resto = resto%100;
    dezena = resto/10;
    unidade = resto%10;

    printf("Milhar: %d\n",milhar);
    printf("Centena: %d\n",centena);
    printf("Dezena: %d\n",dezena);
    printf("Unidade: %d\n",unidade);
    return 0;

}
