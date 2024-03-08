/* 
    189. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e 
    a seguir leia um número inteiro N entre 1 e 5 e verifique  se a coluna N da matriz é 
    nula.  
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
    for (int c = 0; c<QUANTIDADE; c++){
            somador+= matriz[c][coluna];
    }

    if (somador==0){
        printf("A coluna %d da matriz eh nula.",coluna+1);
    } else{
        printf("A coluna %d da matriz nao eh nula.",coluna+1);
    }
    return 0;
}
