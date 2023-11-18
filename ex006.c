/* 
    6. Escreva um programa que leia um número inteiro e informe o seu antecessor e o seu 
    sucessor.  
*/
#include <stdio.h>

int main() {
    printf("<<< ex006 >>>\n\n");

    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d",&numero);

    int sucessor = numero+1;
    int antecessor = numero-1;

    printf("Sucessor: %d\nAntecessor: %d\n",sucessor,antecessor);
    
    return 0;
}
