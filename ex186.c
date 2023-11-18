/*
    186. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e 
    a seguir leia um número inteiro N entre 1 e 5 e calcule o maior elemento da linha N.  
*/
#include <stdio.h>
#define QUANTIDADE 5

int main()
{
    float matriz[QUANTIDADE][QUANTIDADE];

    for (int c = 0; c<QUANTIDADE; c++)
    {
        for (int c2 = 0; c2<QUANTIDADE; c2++)
        {
            float num;
            printf("Informe um numero real da linha %d e coluna %d da matriz -> ",c+1,c2+1);
            scanf("%f",&matriz[c][c2]);
        }
        printf("\n");
    }

    int linha;
    printf("Informe um numero inteiro de 1 a 5 -> ");
    scanf("%d",&linha);

    linha --;

    float maior = matriz[0][0];

    for (int c2 = 0; c2<QUANTIDADE; c2++)
    {
        if (matriz[linha][c2]>=maior)
        {
            maior = matriz[linha][c2];
        }
    }


    printf("O maior elemento da linha %d da matriz eh: %f\n",linha,maior);
    return 0;
}

