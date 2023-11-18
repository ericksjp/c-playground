/* 
    198. Escreva um programa que leia duas matrizes quadradas de ordem 3 de número s 
    intei ros e determine todos os números que aparecem nas duas matrizes. Cada 
    número deve ser impresso apenas uma vez.  
*/
#include <stdio.h>
#include <time.h>
#define QUANTIDADE 3

int main()
{
    int matriz1[QUANTIDADE][QUANTIDADE];
    int matriz2[QUANTIDADE][QUANTIDADE];

    for (int c = 0; c<QUANTIDADE; c++)
    {
        for (int c2 = 0; c2<QUANTIDADE; c2++)
        {
            int num;
            printf("Informe um numero real da linha %d e coluna %d da matriz 1-> ",c+1,c2+1);
            scanf("%d",&matriz1[c][c2]);
        }
        printf("\n");
    }

    for (int c = 0; c<QUANTIDADE; c++)
    {
        for (int c2 = 0; c2<QUANTIDADE; c2++)
        {
            int num;
            printf("Informe um numero real da linha %d e coluna %d da matriz 2-> ",c+1,c2+1);
            scanf("%d",&matriz2[c][c2]);
        }
        printf("\n");
    }

    printf("\nOs numeros que se repetem no primeiro e na segunda matriz sao: \n\n");

    int vetor1[9];
    int vetor2[9];

    int cont = 0;
    for (int c = 0; c<QUANTIDADE; c++)
    {
        for (int c2 = 0; c2<QUANTIDADE; c2++)
        {
            vetor1[cont]=matriz1[c][c2];
            vetor2[cont]=matriz2[c][c2];
            cont++;
        }
        //printf("%d\n",cont);
    }

    for (int c = 0; c<9; c++)
    {
        int verificador = 0;
        for (int c2 = 0; c2<9; c2++)
        {
            if (vetor1[c]==vetor2[c2]){
                verificador=1;
            }
        }
        if (verificador==1){
            printf("  %d\n",vetor1[c]);
        }
    }
    return 0;
}


