/* 
    182. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e 
    determine o maior valor presente na diagonal pri ncipal.  
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

    float maior = matriz[0][0];

    for (int c = 0; c<QUANTIDADE; c++)
    {
        for (int c2 = 0; c2<QUANTIDADE; c2++)
        {
          if (c==c2){
            if (matriz[c][c2]>=maior)
            {
                maior = matriz[c][c2];
            }
          }
        }
    }

    printf("O maior numero da diagonal principal da matriz eh %f",maior);
    return 0;
}
