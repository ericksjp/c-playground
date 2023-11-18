/* 
    263. Escreva um subprograma recursivo que receba como entrada dois números inteiros x 
    e y e calcule o resto da divisão de x por y. Para isso, não deve ser usada a função 
    mod.  
*/
#include <stdio.h>

int div (int dividendo, int divisor)
{
    if (dividendo<divisor){
        return dividendo;
    }else {
        div(dividendo-divisor,divisor);
    }

}

int main()
{
    int dividendo,divisor;
    printf("Dividendo --> ");
    scanf("%d",&dividendo);
    printf("Divisor ----> ");
    scanf("%d",&divisor);
    int ab = div(dividendo,divisor);
    printf("-> %d",ab);
    return 0;

}
