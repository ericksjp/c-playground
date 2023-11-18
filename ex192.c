/* 
    192. Escreva um programa que leia uma matriz quadrad a de or dem 5 de números reais e 
    um número real N e gere uma terceira matriz corresponde nte à multiplicação da 
    matriz lida por N.  
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
    printf("Informe um numero inteiro -> ");
    scanf("%d",&numero);

    float matriz2[QUANTIDADE][QUANTIDADE];

    for (int c = 0; c<QUANTIDADE; c++){
        for (int c2 = 0; c2<QUANTIDADE; c2++){
            matriz2[c][c2]=matriz[c][c2]*numero;
        }
    }

    float maior = matriz2[0][0];

    for (int c = 0; c<QUANTIDADE; c++){
        for (int c2 = 0; c2<QUANTIDADE; c2++){
            if (matriz2[c][c2]>maior){
                maior = matriz[c][c2];
            }
        }
    }

    char maior_str [500]="";
    sprintf(maior_str,"%f",maior);
    int len = strlen(maior_str);

    for (int c = 0; c<QUANTIDADE; c++){
        printf("|",len," ");
        for (int c2 = 0; c2<QUANTIDADE; c2++){
            printf(" %*f",len,matriz2[c][c2]);
        }
        printf(" %*s|\n",len-8," ");
    }
    return 0;

}


