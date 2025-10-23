/* 
    132. Escreva um programa que leia um número inteiro N e imprima a figura abaixo, onde N 
    é o número de elementos impressos na primeira linha. No exemplo abaixo, foi 
    considerado que N=5.  
    
    *****  
      ****  
        *** 
          ** 
            *
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main()
{
    int num;
    printf("Informe um numero inteiro positivo: ");
    scanf("%d",&num);

    printf("\n");

    char teste [99999]="";
    char teste2[2]="*";

    int c = 0;
    while (c<num){
    strcat(teste,teste2);
    printf("%*s\n",num,teste);
    c++;

    }
    return 0;
}
