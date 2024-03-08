/* 
    113. Escreva um programa que leia dois números inteiros M e N e imprima todos o s 
    númer os primos existentes no intervalo [M, N].  
*/
#include <stdio.h>

int main()
{
    int num1,num2;
    printf("Informe o numero inteiro que inicia o intervalo: ");
    if (scanf("%d",&num1)==0){
        printf("Erro!!! Entrada Invalida!!!");
        printf("Pressione qualquer botao para sair...");
        return 0;
        exit(0);
    }
    printf("Informe o numero inteiro que termina o intervalo: ");
    if (scanf("%d",&num2)==0){
        printf("Erro!!! Entrada Invalida!!!");
        printf("Pressione qualquer botao para sair...");
        return 0;
        exit(0);
    }

    int cont=num1;
    while (cont<num2){
        int primo=1;
        int c=2;
        while (c<cont){
            if (cont%c==0){
                primo=0;
            }
        //printf("%d\n",c);
        c++;
        }
        if (primo==1){
            printf("\n%d\n",cont);
        }
        cont++;
    }
    return 0;
}
