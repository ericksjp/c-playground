/* 
    103. Escreva um programa que leia um número inteiro N e verifique se ele é  um número  
    primo.  
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

    if (num==0 || num==1){
        printf("0 e 1 sao casos especiais!");
        return 0;
        exit(0);
    }

    int primo=1;
    for (int c=2; c<num; c++){
        if (num%c==0){
            primo+=1;
        }
    }

    if (primo==1){
        printf("%d eh primo!",num);
    } else{
        printf("%d nao eh primo!",num);
    }
    return 0;

}


