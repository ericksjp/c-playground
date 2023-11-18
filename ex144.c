/* 
    144. Escreva um programa que leia um número inteiro N e calcule o primeiro número 
    natural cujo fatorial é maior do que N.  
*/
#include <stdio.h>

int fatorial(int num)
{
    int fat=1;
    while (num>=2){
        fat*=num;
        num--;
    }

    return fat;
}

int main()
{
    int num;
    printf("Informe um numero inteiro positivo: ");
    scanf("%d",&num);

    int cont=2;
    while (cont<=num){
        if (fatorial(cont)>num){
            break;
        }
        cont++;
    }

    printf("Numero dourado -> %d",cont);
    return 0;
}
