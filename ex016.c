/* 
    16. Escreva um programa que leia uma letra minúscula e imprima a sua letr a ma iúscula 
    correspondente.  
*/
#include <stdio.h>
#include <string.h>

int main (){
    
    printf("<<< exe016 >>>\n\n");

    char letra[10];

    printf("Digite uma letra: ");
    gets(letra);

    strupr(letra);

    if (strlen(letra)>1 || strlen(letra)==0){
        printf("Entrada Invalida!");
    } else {
        printf("Maiuscula correspondente: %s",letra);
    }
    return 0;
}
