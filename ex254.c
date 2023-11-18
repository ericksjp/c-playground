/* 
    254. Escreva um subprograma recursivo que receba como entrada dois números inteiros x 
    e y e calcule o valor do produto de x por y.  
*/
#include <stdio.h>

int main()
{
    int x,y;
    printf("Informe um numero inteiro positivo -> ");
    scanf("%d",&x);
    printf("Informe um numero inteiro positivo -> ");
    scanf("%d",&y);

    int resultado = recursivo(y,x);

    printf("%d",resultado);
}

int recursivo (int y,int x)
{
    int resultado=y;
    if (x==1){
        return resultado;
    } else{
        resultado += recursivo(y,x-1); //pilha recurvisa, quando x==1, ele vai desempilhar e somar tudo com o resultado
        //pilha 5 / 5
    }
    return resultado;
}
