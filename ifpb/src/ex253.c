/* 
    253. Escreva um subprograma recursivo que receba como entrada um número inteiro N 
    posit ivo e provoque um salto de N linhas na tela do usuário.  
*/
#include <stdio.h>

int main()
{
    int num;
    printf("Informe um numero inteiro positivo -> ");
    scanf("%d",&num);

    recursivo(num);
}

int recursivo(int x)
{
    if (x==0){
        printf("fim!");
    } else{
        printf("-\n");
        recursivo(x-1);
    }
}
