/*
    22. Escreva um programa que leia dois números inteiros a e b e determine o maior 
    múltiplo de a que é menor ou igual a b. Por exemplo, o maior múltiplo de 3 menor ou 
    igual a 50 é 48.  
*/
#include <stdio.h>

int main()
{
    
    printf("<<< exe022 >>>\n\n");

    int numero1,numero2;

    printf("Informe um valor inteiro: ");
    scanf("%d",&numero1);
    printf("Informe outro valor inteiro: ");
    scanf("%d",&numero2);

    int maior_multiplo = numero1 - (numero1%numero2);

    printf("O maior multiplo de %d menor ou igual a %d eh %d.",numero1,numero2,maior_multiplo);
    return 0;
}
