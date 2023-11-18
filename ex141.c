/* 
    141. Escreva um programa que leia três números inteiros positivos e calcule o MMC dos 
    números lidos.  
*/
#include <stdio.h>

int primo(a)
{
    int cont=2;

    while (cont<a)
    {
        if (a%cont==0){
            return 0;
        }
        cont++;
    }
    return 1;


}

int main()
{
    int num1,num2,num3;
    printf("Informe um numero inteiro -> ");
    scanf("%d",&num1);
    printf("Informe um numero inteiro -> ");
    scanf("%d",&num2);
    printf("Informe um numero inteiro -> ");
    scanf("%d",&num3);

    if (num1<1 || num2<1 || num3<1){
        printf("Informe apenas numeros inteiros positivos!");
        return 0;
        exit(0);
    }

    int maior=num1;

    if (num2>num1 && num2>num3){
        maior = num2;
    } else if (num3>num1 && num3>num2){
        maior = num3;
    }

    int soma=1;
    int c = 2;
    while (c<=maior){
        if (primo(c))
            {
                if (num1%c==0 || num2%c==0 || num3%c==0){

                    soma*=c;

                    if (num1%c==0){
                        num1/=c;
                    }
                    if (num2%c==0){
                        num2/=c;
                    }
                    if (num3%c==0){
                        num3/=c;
                    }
                    continue;
                }
            }
        c++;
    }
    printf("\nMMC dos 3 numeros informados -> %d\n",soma);
    return 0;
}
