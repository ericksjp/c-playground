/* 
    161. Escreva um programa que leia um vetor de vinte caract eres e verifique se o vetor é 
    ou não um palíndromo.  
*/
#include <stdio.h>

#include <string.h>

int main()
{
    char str[21]=""; char str_2[21]="";
    printf("Informe uma string de ate 20 caracteres: ");
    fgets(str,21,stdin);
    fflush(stdin);
    int len = strlen(str);
    if (str[len-1]=='\n'){
        str[len-1]='\0';
    }

    int c = len-1;
    while(c>=0){
        char temp [2]="";
        sprintf(temp,"%c",str[c]);
        strcat(str_2,temp);
        c--;
    }

    if (strcmp(str_2,str)==0){
        printf("palindromo");
    }
}

