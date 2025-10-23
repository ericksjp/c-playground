/* 
    180. Escreva um programa que leia uma matriz quadrada de ordem 5 de números inteiros 
    e um inteiro N e verifique quantas vezes o núme ro N aparece dentro da matriz.  
*/
#include <stdio.h>
#define QUANTIDADE 5

int main()
{
    int matriz[QUANTIDADE][QUANTIDADE];

    for (int c = 0; c<QUANTIDADE; c++)
    {
        for (int c2 = 0; c2<QUANTIDADE; c2++)
        {
            int num;
            printf("Informe o numero inteiro de linha %d e coluna %d da matriz -> ",c+1,c2+1);
            scanf("%d",&matriz[c][c2]);
        }
        printf("\n");
    }

    int numero;
    printf("Informe um numero inteiro -> ");
    scanf("%d",&numero);

    int contador = 0;

    for (int c = 0; c<QUANTIDADE; c++)
    {
        for (int c2 = 0; c2<QUANTIDADE; c2++)
        {
            if (matriz[c][c2]==numero){
                contador++;
            }
        }
    }

    printf("O numero %d aparece %d vezes na matriz.",numero,contador);
    return 0;
}

