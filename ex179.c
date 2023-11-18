/* 
    179. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e 
    imprima todos os elementos que estão aci ma e ab aixo da diagonal principal.  
*/
#include <stdio.h>

int main()
{
    int matriz[5][5];

    for (int c = 0; c<5; c++)
    {
        for (int c2 = 0; c2<5; c2++)
        {
            int num;
            printf("Informe o numero inteiro de linha %d e coluna %d da matriz -> ",c+1,c2+1);
            scanf("%d",&matriz[c][c2]);
        }
        printf("\n");
    }

    printf("Elementos que estao acima e abaixo da diagonal principal da matriz: \n\n");
    for (int c = 0; c<5; c++)
    {
        for (int c2 = 0; c2<5; c2++)
        {
            if (c!=c2)
            {
                printf("%d   ",matriz[c][c2]);
            } else {
                printf("    ");
            }

        }
        printf("\n");
    }
    return 0;


}
