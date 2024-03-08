/* 
    93. Escreva um programa em que l eia um número inteiro entre 1000  e 9999 e verifique se 
    o número lido é ou não um palíndromo.  
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int num;
    printf("Informe um numero inteiro de 1 a 9999 -> ");
    if (scanf("%d",&num)==0 || (num<1 || num>9999)){
        printf("Entrada invalida!");
        exit(0);
    }

    printf("\n");
    char num_str[10];
    sprintf(num_str,"%d",num);

    int len = strlen(num_str);
    int c = 1;
    char char_num_str[10];
    char num_reverso[10];
    char char_num;

    while (c<=len){
        char_num = num_str[len-c];
        sprintf(char_num_str,"%c",char_num);
        strcat(num_reverso, char_num_str);
        c++;
    }

    if (!strcmp(num_str,num_reverso)){
        printf("Numero %s ao contrario -> %s\nConclusao -> Palindromo",num_str,num_reverso);
    } else{
        printf("Numero %s ao contrario -> %s\nConclusao -> Nao eh palindromo",num_str,num_reverso);
    }
    printf("\n\nPressione qualquer tecla para sair...");
    return 0;
}
