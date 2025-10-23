/* 
    190. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e  
    verifi que quantas linhas nulas existem na matriz.  
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

    int verificadores[QUANTIDADE];

    for (int c = 0; c<QUANTIDADE; c++)
    {
        float somador = 0;
        for (int c2 = 0; c2<QUANTIDADE; c2++)
        {
            somador+=matriz[c][c2];
        }
        if (somador==0){
            verificadores[c]=1;
        } else {
            verificadores[c]=0;
        }
    }

    for (int c = 0; c<QUANTIDADE; c++){
        if (verificadores[c]==1){
            printf("A linha %d da matriz eh nula.\n",c+1);
        } else{
            printf("A linha %d da matriz nao eh nula.\n",c+1);
        }
    }
    return 0;
}
