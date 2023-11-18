/* 
    94. Escreva um programa que leia um valor inteiro  a ser sacado pelo us uário e  identifique 
    quantas cédulas de cada tipo devem ser usadas para que o saque seja efetuado. Você 
    pode supor que o caixa tem cédulas de R$ 10,00, R$ 20,00, R$ 50,00 e R$ 100,00. O 
    valor máximo de um saque é R$ 1000,00 e, para cada saque, deve -se prior izar o uso 
    das cédulas maiores.  
*/
#include <stdio.h>


int main()
{
    
    float valor;
    printf("Informe o valor a ser sacado -> R$");
    scanf("%f",&valor);

   int duzentos = valor/200;
   int resto = (int)valor%200;
   int cem = resto/100;
   resto = resto%100;
   int cinquenta = resto/50;
   resto = resto%50;
   int vinte = resto/20;
   resto = resto%20;
   int dez = resto/10;
   resto = resto%10;
   int cinco = resto/5;
   int real = resto%5;

   float sobra = valor-(int)valor;

   printf("============ C�DULAS E MOEDAS A SEREM RETIRADAS ============\n");
   printf("Celula R$200 -> %d \nCelula R$100 -> %d \nCelula R$50  -> %d\nCelula R$20  -> %d\nCelula R$10  -> %d\nCelula R$5   -> %d\nMoeda  R$1   -> %d\n",duzentos,cem,cinquenta,vinte,dez,cinco,real);
   printf("============================================================\n");

   if (sobra>0.000){
    printf("Restante na conta: R$%.2f",sobra);
   }
   return 0;
}
