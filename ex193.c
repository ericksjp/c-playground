/* 
    193. Escreva um programa que leia uma matriz quadrada de ordem dez de números 
    inteiros e verifique a quantidade de linhas e colunas  nulas da mat riz. O resultado 
    deve ser um único número referente à soma do número de linhas e colunas nulas.  
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

    int contador = 0;

    for (int c = 0; c<QUANTIDADE; c++)
    {
        int somador1 = 0;
        int somador2 = 0;
        for (int c2 = 0; c2<QUANTIDADE; c2++)
        {
            somador1+=matriz[c][c2];
            somador2+=matriz[c2][c];
        }
        if (somador1==0 && somador2==0){
            contador+=2;
        } else if (somador1==0 || somador2==0){
            contador+=1;
        }
    }

    printf("\nO numero de colunas e linhas nulas da matriz eh: %d",contador);
    return 0;
}

