/* 
    137. Escreva um programa que leia um número inteiro positivo e calcule  o número de 
    algarismos deste número.  
*/
#include <stdio.h>
#include <string.h>


int main ()
{
    int num;
    printf("Informe um numero: ");
    scanf("%d",&num);

    char num_str[100]="";

    sprintf(num_str,"%d",num);

    int len = strlen(num_str);

    printf("%d -> %d algarismos",num,len);
    return 0;
}
