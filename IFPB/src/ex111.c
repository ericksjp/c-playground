/* 
    111. Escreva um programa que leia o termo inicial e a razão de uma PA e um número 
    inteiro positivo N e impri ma os N  primeiros termos da progressão.  
*/
#include <stdio.h>

int main()
{
    int termo_inicial,razao,termos_qtd;
    printf("Informe o termo inicial da PA : ");
    if (scanf("%d",&termo_inicial)==0){
        printf("\nErro! Entrada Invalida!");
        return 0;
        exit(0);
    }
    printf("Informe a razao da PA: ");
    if (scanf("%d",&razao)==0){
        printf("\nErro! Entrada Invalida!");
        return 0;
        exit(0);
    }
    printf("Informe a quantidade de termos da PA: ");
    if (scanf("%d",&termos_qtd)==0){
        printf("\nErro! Entrada Invalida!");
        return 0;
        exit(0);
    }

    int cont=0;
    while (cont<termos_qtd){
        printf("%d ",termo_inicial);
        termo_inicial+=razao;
        cont++;
    }
    printf("FIM!");
    return 0;
}
