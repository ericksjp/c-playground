/* 
    256. Escreva um subprograma recursivo que receba como entrada uma matriz quadrada 
    de ordem 5 de números reais e um número inteiro N (entre  1 e 5)  e imprima os N 
    primeiros números da diagonal principal.  
*/
#include <stdio.h>

int main()
{
    int matriz[5][5];

    //int teste[5][5]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24};

    for (int c = 0; c<5; c++){
        for (int c2 = 0; c2<5; c2++)
        {
            int num;
            printf("Informe o numero da matriz na linha %d e coluna %d -> ",c2+1,c+1);
            scanf("%d",&num);
            matriz[c2][c]=num;
        }
        printf("\n");
    }

    int numero;
    printf("Informe um numero inteiro de 1 a 5 -> ");
    scanf("%d",&numero);

    printf("\nOs %d primeiros numeros da diagonal principal do vetor informado: ",numero);
    recursivo (matriz,numero-1);
    return 0;
}

int recursivo (int matriz[5][5], int num)
{

    if (num==0){
        printf("%d ",matriz[num][num]);
    } else {
        //printf("%d - ",c);
        //printf("%d - ",num);
        recursivo(matriz,num-1);
        printf(", %d ",matriz[num][num]);
        }
}
