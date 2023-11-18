/* 
    138. Escreva um programa que leia um número inteiro  positivo e calcule  a soma de todos 
    os seus algarismos . 
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
    int num;
    printf("Informe um numero: ");
    scanf("%d",&num);

    char num_str[100]="";

    sprintf(num_str,"%d",num);

    int len = strlen(num_str);

    int c=0;
    int soma=0;
    while (c<len){
        int algarismo = num_str[c] - '0';
        soma+=algarismo;
        c++;
    }
    printf("%d -> %d",num,soma);
    return 0;
}
