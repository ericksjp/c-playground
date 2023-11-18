/* 
    139. Escreva um programa que leia um número inteiro N e um número inteiro K e 
    identifique o k -ésimo algarismo (da direita para a esquerda) do número N. Caso o valor de k seja maior do que a quantid ade de algarismos de N, a resposta do 
    programa deve ser 0.  
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main ()
{
    printf("**primeiro algarismo eh considerado 1\n\n");
    int num1,num2;
    printf("Informe um numero inteiro: ");
    scanf("%d",&num1);
    printf("Informe outro numero int:  ");
    scanf("%d",&num2);


    char num1_str[100];

    sprintf(num1_str,"%d",num1);

    int len = strlen(num1_str);

    if (num2>len){
        printf("0");
    } else {
        printf("Na posicao %d de %d temos %c\n",num2,num1,num1_str[num2-1]);
    }
    return 0;


}
