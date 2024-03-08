/* 
    15. Escreva um programa que leia uma palavra e um número inteiro k e identifique a k -
    ésima letra da palavra informada pelo usuário.  
*/
#include <stdio.h>

int main() {
    printf("<<< exe015 >>>\n\n");

    //declarando os dados
    char palavra[10];
    int kesima;

    //recebendo os dados
    printf("Digite uma palavra: ");
    gets(palavra);
    printf("Kesima letra (numero inteiro): ");
    scanf("%d",&kesima);

    //processando os dados para fazer os calculos
    char letra = palavra[kesima];

    //mostrando o resultado pro usuario
    printf("Na posicao %d da palavra %s temos a letra %c.",kesima,palavra,letra);
    return 0;

}
