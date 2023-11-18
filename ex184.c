/* 
    184. Escreva um programa que leia uma matriz quadrada de ordem 5 de número s reais  e 
    a seguir leia um número inteiro N entre 1 e 5 e calcule a média aritmética dos  
    elementos da coluna N.  
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

    int coluna;
    printf("Informe um numero inteiro de 1 a 5 -> ");
    scanf("%d",&coluna);

    coluna --;

    float somador = 0;

    for (int c2 = 0; c2<QUANTIDADE; c2++)
    {
        somador += matriz[c2][coluna];

    }

    float media = somador/5;

    printf("\nA media aritmetica de todos os numeros da coluna %d da matriz eh %f\n",coluna+1,media);
    return 0;
}
