/* 
    123. Escreva um programa que leia dois números inteiros M e N e calcule os N primeiros 
    números primos maiores ou iguais a M. 
*/
#include <stdio.h>

int primo(int a)
{
    if (a<2){
        return 0;
    } else if (a==1){
        return 1;
    }

    int c = 2;
    while (c<a){
        if (a%c==0){
            return 0;
        }
        c++;
    }
    return 1;
}


int main()
{
    int num,num2;
    printf("Informe um numero inteiro: ");
    scanf("%d",&num);
    printf("Informe outro numero inteiro: ");
    scanf("%d",&num2);

    int c=1;
    int count_user=0;

    while (count_user<num2){
        if (primo(num)){
            printf("%d\n",num);
            count_user++;
        }
        num++;
    }
    return 0;

}
