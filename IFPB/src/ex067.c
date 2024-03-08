/* 
    67. Escreva um programa que leia o valor de um ano e verifique se ele é ou nã o bissexto.  
    
    Um ano é bissexto se ele for divisível por quatro centos ou se se ele for divisível por 4 
    mas não for divisível por 100 . 
*/
#include <stdio.h>

int main()
{
    printf("<<< exe067 >>>\n\n");
    int ano;
    printf("Informe o ano: ");
    scanf("%d",&ano);

    if (ano%4==0 && ano%100!=0){
        printf("%d eh um ano BISSEXTO.",ano);
    } else {
        printf("%d nao eh um ano BISSEXTO.",ano);
    }
    return 0;
}
