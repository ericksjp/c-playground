/* 
    191. Escreva um programa que leia duas matrizes quadradas de ordem 5 de números 
    reais e gere uma terceira matriz correspondente à soma das duas matrizes lidas.  
*/
#include <stdio.h>
#define QUANTIDADE 5

int main()
{
    float matriz1[QUANTIDADE][QUANTIDADE];
    float matriz2[QUANTIDADE][QUANTIDADE];

    for (int c = 0; c<QUANTIDADE; c++)
    {
        for (int c2 = 0; c2<QUANTIDADE; c2++)
        {
            float num;
            printf("Informe um numero real da linha %d e coluna %d da matriz 1 -> ",c+1,c2+1);
            scanf("%f",&matriz1[c][c2]);
        }
        printf("\n");
    }

    for (int c = 0; c<QUANTIDADE; c++)
    {
        for (int c2 = 0; c2<QUANTIDADE; c2++)
        {
            float num;
            printf("Informe um numero real da linha %d e coluna %d da matriz 2 -> ",c+1,c2+1);
            scanf("%f",&matriz2[c][c2]);
        }
        printf("\n");
    }

    float matriz3[QUANTIDADE][QUANTIDADE];

    for (int c = 0; c<QUANTIDADE; c++)
    {
        for (int c2 = 0; c2<QUANTIDADE; c2++)
        {
            matriz3[c][c2]=matriz1[c][c2]+matriz2[c][c2];
        }
    }

    char num_str[500]="";
    float maior = matriz3[0][0];

    for (int c=0; c<QUANTIDADE; c++){
        for (int c2=0; c2<QUANTIDADE; c2++){
            if (matriz3[c][c2]>maior){
                maior= matriz3[c][c2];
            }
        }
    }

    sprintf(num_str,"%f",maior);
    int len =strlen(num_str);

    for (int c=0; c<QUANTIDADE; c++){
        printf("|%*s",len," ");
        for (int c2=0; c2<QUANTIDADE; c2++){
            printf(" %*f",len,matriz3[c][c2]);
        }
        printf("%*s|\n",len," ");
    }
    return 0;
}
