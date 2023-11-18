/* 
    162. Escreva um programa que leia um número inteiro entre 0 e 255 e calcule o seu valor 
    correspondente em binário.  
*/
#include <stdio.h>

int main()
{
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d",&num);
    char binario[500]="";
    while (num!=0){
        int resto = num%2;
        num = num/2;
        if (resto==1){
            strcat(binario,"1");
        } else{
            strcat(binario,"0");
        }
    }
    int len = strlen(binario);
    int c = len-1;
    if (len==0){
        printf("0");
    } else{
        while (c>=0){
            printf("%c",binario[c]);
            c--;
        }
    }
}
