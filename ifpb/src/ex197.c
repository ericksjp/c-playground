/* 
    197. Escreva um programa que leia duas matrizes quadradas de ordem 5 de números 
    inteiros e determine quantas linhas e colunas idênticas existem nas duas matrizes.  
*/
#include <stdio.h>
#define QUANTIDADE 5

int main()
{
    int matriz1[QUANTIDADE][QUANTIDADE];
    int matriz2[QUANTIDADE][QUANTIDADE];

    for (int c = 0; c<QUANTIDADE; c++)
    {
        for (int c2 = 0; c2<QUANTIDADE; c2++)
        {
            int num;
            printf("Informe um numero real da linha %d e coluna %d da matriz 1-> ",c+1,c2+1);
            scanf("%d",&matriz1[c][c2]);
        }
        printf("\n");
    }

    for (int c = 0; c<QUANTIDADE; c++)
    {
        for (int c2 = 0; c2<QUANTIDADE; c2++)
        {
            int num;
            printf("Informe um numero real da linha %d e coluna %d da matriz 2-> ",c+1,c2+1);
            scanf("%d",&matriz2[c][c2]);
        }
        printf("\n");
    }

    int coluna_comp1[5], coluna_comp2[5], linha_comp1[5], linha_comp2[5];

    for (int c = 0; c<QUANTIDADE; c++)
    {
        coluna_comp1[c]=matriz1[c][0];
        coluna_comp2[c]=matriz2[c][0];
        linha_comp1[c]=matriz1[0][c];
        linha_comp2[c]=matriz2[0][c];
    }

    int colunas_pft_mt1 = 0;
    int colunas_pft_mt2 = 0;
    int linhas_pft_mt1 = 0;
    int linhas_pft_mt2 = 0;

    for (int c = 0; c<QUANTIDADE; c++)
    {
        int contador1=0;
        int contador2=0;
        int contador3=0;
        int contador4=0;

        for (int c2 = 0; c2<QUANTIDADE; c2++)
        {
            if (coluna_comp1[c2]==matriz1[c2][c]){
                contador1++;
            }
            if (coluna_comp2[c2]==matriz2[c2][c]){
                contador2++;
            }
            if (linha_comp1[c2]==matriz1[c][c2]){
                contador3++;
            }
            if (linha_comp2[c2]==matriz2[c][c2]){
                contador4++;
            }
        }
        if (contador1==5){
            colunas_pft_mt1+=1;
        }
        if (contador2==5){
            colunas_pft_mt2+=1;
        }
        if (contador3==5){
            linhas_pft_mt1+=1;
        }
        if (contador4==5){
            linhas_pft_mt2+=1;
        }
    }

    printf("A primeira matriz tem %d linhas perfeitas e %d colunas perfeitas.\n",linhas_pft_mt1,colunas_pft_mt1);
    printf("A segunda matriz tem %d linhas perfeitas e %d colunas perfeitas.\n",linhas_pft_mt2,colunas_pft_mt2);
    return 0;
}



