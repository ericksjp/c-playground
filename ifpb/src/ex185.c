/* 
    185. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e 
    calcule o valor da soma dos elementos de cada uma de suas linhas 
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


    float somas[5];
    for (int c = 0; c<QUANTIDADE; c++)
    {
        for (int c2 = 0; c2<QUANTIDADE; c2++)
        {
            somas[c] += matriz[c][c2];

        }
    }

    for (int c = 0; c<QUANTIDADE; c++)
    {
        printf("A soma dos elementos da linha %d da matriz eh: %f\n",c+1,somas[c]);
    }
    return 0;
}
