/* 
    187. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e 
    a segui r leia um número inteiro N e determine a quantidade de números pares 
    existente na linha N.  
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

    printf("Os numeros pares da linha %d da matriz sao: \n",linha);

    linha --;

    float somador = 0;

    for (int c2 = 0; c2<QUANTIDADE; c2++)
    {
        if ((int)matriz[linha][c2]-matriz[linha][c2]==0 && (int)matriz[linha][c2]%2==0){
            printf("  %f\n", matriz[linha][c2]);
        }
    }

    return 0;
}
