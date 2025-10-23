/* 
    188. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e 
    a seguir leia um número inteiro N e determine a quantidade de números primos na 
    colu na N.  
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

    printf("\nOs numeros primos da coluna %d da matriz sao: \n\n",coluna);

    coluna --;

    for (int c2 = 0; c2 < QUANTIDADE; c2++){

        if ((int) matriz[c2][coluna] - matriz[c2][coluna]==0 && (int)matriz[c2][coluna]==2){
            printf("  %f\n",matriz[c2][coluna]);
        }

        if ((int) matriz[c2][coluna] - matriz[c2][coluna]==0 && (int)matriz[c2][coluna]%2!=0)
        {
            int verificador = 1;
            for (int c3 = 2; c3<matriz[c2][coluna]; c3++){
                if ((int)matriz[c2][coluna]%c3==0){
                    verificador=0;
                }
            }

            if (matriz[c2][coluna]==1 || matriz[c2][coluna]==0 ){
                verificador = 0;
            }

            if (verificador==1){
                printf("  %f\n",matriz[c2][coluna]);
            }
        }
    }
    return 0;
}
