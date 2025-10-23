/*
    261. Escreva u m subprograma recursivo que receba como entrada um número inteiro e 
    calcule  a soma de todos os seus algarismos .  
*/
#include <stdio.h>

int tamanho (int x)
{
    if (x<10){
        return x;
    } else {
        return x + tamanho(x/10);
    }
}

int main()
{
    int num;
    printf("-> ");
    scanf("%d",&num);
    int ab = tamanho(num);
    printf("-> %d",ab);
    return 0;

}
