/* 
    210. Em uma determinada cidade, cada m2 de um terreno está avaliado em R$ 50,00. 
    Escreva um programa que leia o comprimento e a larg ura de um terreno localizado 
    nesta cidade e calcule o seu valor de mercado. O cálculo deve ser realizado através 
    de um subprograma, que deve receber como entrada o comprimento e a largura do 
    terreno.  
*/
#include <stdio.h>

float valor (float comprimento, float largura)
{
    return (comprimento*largura)*50;
}

int main()
{
    float comprimento,largura;
    printf("Informe o comprimento do terreno -> ");
    scanf("%f",&comprimento);
    printf("Informe a lagura do terreno ------> ");
    scanf("%f",&largura);

    float valvalor = valor(comprimento,largura);

    printf("\nO terreno vale R$%2f",valvalor);
    return 0;
}
