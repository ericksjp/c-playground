/* 
    125. Escreva um programa que leia um número inteiro positivo N e imprima os N primeiros 
    números perfeitos.  
*/
#include <stdio.h>

int main()
{
    int num,razao,termo;
    printf("Informe o termo inicial da PA: ");
    scanf("%d",&termo);
    printf("Informe a razao da PA: ");
    scanf("%d",&razao);
    printf("Informe o numero a verificar: ");
    scanf("%d",&num);

    while (termo<=num){
        if (termo==num){
            printf("O numero informado pertence a PA.");
            return 0;
            exit(0);
        }
        termo+=razao;
    }

    printf("O numero informado nao pertence a PA.");
    return 0;
}

