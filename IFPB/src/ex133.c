/* 
    133. Escreva um programa que leia um número inteiro N e imprima a figura abaixo, onde N 
    é o número de elementos impressos na primeira linha. No exemplo abaixo, foi 
    considerado que N=5.  
    
    * ** 
    *** 
    ****  
    *****
*/
#include <stdio.h>
#include <string.h>

int main()
{
    int num;
    printf("Informe um numero inteiro: ");
    scanf("%d",&num);

    printf("\n");

    char loop[500]="";
    char risco[2]="*";

    int c=0;
    while (c<num){
        strcat(loop,risco);
        c++;
    }

    int len = strlen(loop);

    c=0;
    while (c<num){
        printf("%s\n",loop);
        loop[len-1]='\0';
        len--;
        c++;
    }

    return 0;
}
