/* 
    260. Escreva um subprograma recursivo que receba como entrada um número inteiro e 
    calcule a sua q uantidade de algarismos . 
 */
#include <stdio.h>


int main()
{
    int decimal;

    printf("Informe um numero inteiro --> ");
    scanf("%d",&decimal);


    int len = comprimento(decimal);

    printf("\Quantidade de algarismos no numero -> %d",len);
    return 0;
}

int comprimento (int num)
{
    if (num == 0) {
        return 0;
    } else {
        //printf ("%d - ",num);
        return 1 + comprimento(num / 10);
    }
}
