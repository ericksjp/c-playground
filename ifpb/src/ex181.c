/* 
    181. Escreva um programa que leia uma matriz quadrada de ordem 5 de núme ros reais e 
    a seguir leia um número inteiro N entre 1 e 5 e imprima os N primeiros elementos da 
    sua diagonal principal.  
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

    int numero;
    printf("Informe um numero inteiro de 1 a 5 -> ");
    scanf("%d",&numero);

    printf("Os %d primeiros numeros reais da diagonal principal da matriz: \n\n");

    for (int c = 0; c<numero; c++)
    {
        for (int c2 = 0; c2<numero; c2++)
        {
          if (c==c2){
            printf("%f\n",matriz[c][c2]);
          }
        }
    }
    return 0;
}


