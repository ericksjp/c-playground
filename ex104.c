/* 
    104. Escreva u m programa que leia um número inteiro N e verifique se ele é um número 
    perfeito. Um número é perfeito quando ele é igual à soma de todos os seus divisores 
    exatos exceto ele mesmo. Por exemplo, o número 6 (1+2+3) é um número perfeito.  
*/
#include <stdio.h>

int main()
{
    int num;
    printf("Informe um numero inteiro positvo: ");
    if (scanf("%d",&num)==0 || num<0){
        printf("Entrada invalida!");
        return 0;
        exit(0);
    }

    int num_perfeito=0;

    for (int c=1; c<num; c++){
        if (num%c==0){
            num_perfeito+=c;
            }
        }
    printf("A soma de todos os seus divisores extatos eh: %d", num_perfeito);
    if (num==num_perfeito){
        printf("\n%d eh um numero perfeito!",num);
    } else{
        printf("\n%d nao eh um numero perfeito!,",num);
    }
    return 0;

}
