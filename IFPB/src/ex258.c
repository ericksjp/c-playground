/*
    258. Escreva um subprograma recursivo que receba como  entrada um valor  em decimal e 
    imprima  o seu valor correspondente em binár io. 
*/
#include <stdio.h>

int main()
{
    int base;

    printf("Informe a base da potenciacao -> ");
    scanf("%d",&base);


    recursivo(base);

    //printf("\nResultado -> %d",resultado);
}

int recursivo(int base)
{
    if (base==0){
        //printf (" - oi");
    } else {
        printf("%d",base%2);
        recursivo(base/2);
        //pilha 2 - 1 - 0
    }


}
