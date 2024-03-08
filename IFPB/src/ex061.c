/* 
    61. Escreva um programa que leia um número intei ro e de termine o seu valor absoluto. O 
    valor absoluto deve ser calculado sem o uso de qualquer função oferecida pela 
    linguagem.  
*/
#include <stdio.h>

int main()
{
    printf("<<< exe061 >>>\n\n");
    int numero;

    printf("Informe um numero inteiro: ");
    scanf("%d",&numero);

    if (numero<0){
        numero = numero*-1;
    }
    printf("Valor absoluto do numero: %d",numero);
    return 0;
}
