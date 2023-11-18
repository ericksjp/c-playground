/* 
    110. Escreva um programa que leia um número natural N e calcule o seu fatorial.  
*/
#include <stdio.h>

int main()
{
    int num;
    printf("Informe um numero inteiro: ");
    if (scanf("%d",&num)==0){
        printf("Entrada Invalida!");
        return 0;
        exit(0);
    }
    printf("\n");
    long int acumulador=1;
    int cont = num;
    while (cont>0){
        printf("%d \n",cont);
        acumulador*=cont;
        cont--;
    }

    printf("\n%d! = %ld",num,acumulador);
    return 0;
}
