/* 
    274. Escreva um subprograma recursivo que receba como entrada duas matrizes 
    quadradas de ordem 5 de números inteiros e um número inteir o N ent re 1 e 5 e 
    verifique se as duas matrizes são idênticas a partir da linha N.  
*/
#include <stdio.h>
#define TAM 2

int printm (int mat1[TAM][TAM], int mat2[TAM][TAM], int n)
{
    int printmin(int mat11[TAM][TAM],int mat22[TAM][TAM], int rows, int linhas){
        //printf("%d\n",rows);
        if (mat11[linhas][rows]==mat22[linhas][rows]){
            //printf("%d\n",rows);
            if (rows==TAM-1){
                return 1;
            } else {
                printmin(mat11,mat22,rows+1,linhas);
            }
        } else {
            return 0;
        }
    }

    if (n-1<TAM-1){
        //printf("%d\n",printmin(mat1,mat2,0,n-1));
        if (printmin(mat1,mat2,0,n-1)==1){
            printm(mat1,mat2,n+1);
        } else {
            return 0;
        }
    } else if (n-1==TAM-1){
        if (printmin(mat1,mat2,0,n-1)==1){
            return 1;
        } else {
            return 0;
        }
    }
}

int main()
{
    int matriz1[2][2]={1,2,3,4};
    int matriz2[2][2]={1,2,3,3};

    int aa = printm(matriz1,matriz2,1);

    printf("%d",aa);
}
