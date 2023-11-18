/* 
    24. Escreva um programa que leia o termo inicial e a razão de uma progressão aritmética e 
    imprima os 5 primeiros termos desta progressão.  
*/
#include <stdio.h>

int main() {

    printf("<<< exe024 >>>\n\n");

    int termo_inicial,razao;

    printf("Termo inicial: ");
    scanf("%d",&termo_inicial);
    printf("Razao da PA: ");
    scanf("%d",&razao);

    int c = 0;

    for (c; c<=4 ;c++){
        termo_inicial+=razao;
        printf("%d -> ",termo_inicial);
    }
    
    printf("FIM");
    return 0;
}
