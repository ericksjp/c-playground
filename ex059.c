/* 
    59. Escreva um programa que leia dois números e determine se o segundo número é 
    menor, igual ou maior que o p rimeiro . 
*/
#include <stdio.h>

int main()
{
    printf("<<< exe059 >>>\n\n");
    int numero1,numero2;

    printf("Informe o primeiro numero inteiro: ");
    scanf("%d",&numero1);
    printf("Informe o segundo numero inteiro:  ");
    scanf("%d",&numero2);

    if (numero1>numero2){
        printf("%d > %d",numero1,numero2);
    } else if (numero2>numero1){
        printf("%d > %d",numero2,numero1);
    } else {
        printf("%d = %d",numero1,numero2);
    }
    return 0;
}
