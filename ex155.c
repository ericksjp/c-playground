/* 
    155. Escreva um programa que leia dez números inteiros e, após finalizar a leitura, leia um 
    número inteiro N (entre 1 e 10) e imprima qual foi o enésimo número digitado pelo 
    usuário.  
*/
#include <stdio.h>
#define QUANTIDADE 10

int main()
{
    int vetor[QUANTIDADE]; int c=0;
    while(c<QUANTIDADE){
        int num;
        printf("Informe um numero inteiro: ");
        scanf("%d",&num);
        vetor [c] = num;
        c++;
    }
    int pos;
    printf("\nInforme o indice do numero que deseja visualizar: ");
    scanf("%d",&pos);

    printf("\nO numero na %d posicao eh %d",pos,vetor[pos-1]);
    return 0;
}
