/* 
    127. Escreva um programa que leia várias palavras e, para cada palavra lida, determine o 
    seu número de letras. O processamento deverá ser encerrado quando f orem li das duas 
    palavras de cinco letras.  
*/
#include <stdio.h>
#include <string.h>

int main()
{
    int len1;
    int len2;
    do{
        char palavra1[501];
        char palavra2[502];

        printf("Digite uma palavra qualquer   -> ");
        fgets(palavra1, 502, stdin);
        len1 = strlen(palavra1)-1;
        printf("Digite outra palavra qualquer -> ");
        fgets(palavra2, 502, stdin);
        len2 = strlen(palavra2)-1;

        printf("\nPalavra -> %sTamanho -> %d\n\n",palavra1,len1);
        printf("Palavra -> %sTamanho -> %d\n",palavra2,len2);
        if (len1!=5 || len2!=5){
        printf("-----------------------------------------\n");
        printf("Uma ou duas palavras tem tamanho diferente de 5! Repetindo o looping.\n");
        printf("-----------------------------------------\n");}
    } while (len1!=5 || len2!=5);
    printf("-----------------------------------------\n");
    printf("As duas palavras tem tamanho igual a 5, fim do looping!\n");
    printf("-----------------------------------------\n");
    return 0;
}
