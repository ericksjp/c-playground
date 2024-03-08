/* 
    119. Escreva um programa que leia um número inteiro N e imprima todos os termos da 
    série de Fibonacci que são menores ou iguais a N.  
*/
#include <stdio.h>


int main()
{
    int n;
    printf("Informe um numero inteiro: ");
    scanf("%d",&n);

    int n1=0;
    int n2=1;

    int c=0;

    if (n==1){
    printf("0");
    getch(0);
    exit(0);
    } else if (n==2){
    printf("0 1");
    getch(0);
    exit(0);
    } else if(n==0){
    printf("vazio");
    getch(0);
    exit(0);
    }

    while (c<n-2){
        int n3=n1+n2;
        if (c==0){
            printf("0 1");
        }
        printf(" %d",n3);
        n1=n2;
        n2=n3;
        c++;
    }
    return 0;
}
