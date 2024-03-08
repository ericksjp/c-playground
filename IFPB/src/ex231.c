/* 
    231. Escreva um programa que leia três números inteiros distintos e identifique o maior e 
    o menor número lido. O programa  deve t er um subprograma para calcular o maior 
    número e outro para calcular o menor número.  
*/
#include <stdio.h>


int maior(int n1, int n2, int n3)
{
    int maiorC = n1;
    if (n2>maiorC && n2>n3){
        maiorC = n2;
    } else if (n3>maiorC){
        maiorC = n3;
    }
    return maiorC;
}

int menor(int n1, int n2, int n3)
{
    int menorC = n1;
    if (n2<menorC && n2<n3){
        menorC = n2;
    } else if (n3<menorC){
        menorC = n3;
    }
    return menorC;
}

int main()
{
    int num1,num2,num3;
    printf("Informe os tres numeros -> ");
    scanf("%d%d%d",&num1,&num2,&num3);

    int maiorC = maior(num1,num2,num3);
    int menorC = menor(num1,num2,num3);

    printf("Maior numero -> %d\n",maiorC);
    printf("Menor numero -> %d\n",menorC);
    return 0;
}
