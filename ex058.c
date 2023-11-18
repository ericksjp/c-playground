/* 
    58. Escreva um programa que leia um número inteiro e verifique se ele é par ou ímpar.  
*/
#include <stdio.h>

int main()
{
    printf("<<< exe058 >>>\n\n");
    int numero;
    printf("Informe um numero inteiro: ");
    scanf("%d",&numero);

    if (numero%2==0){
        printf("O numero %d eh PAR!",numero);
    }else {
        printf("O numero %d eh IMPAR!",numero);
    }
    return 0;
}
