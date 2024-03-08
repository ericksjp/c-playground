/* 
    262. Escreva um subprograma recursivo que receba como entrada dois números inteiros x 
    e y e calcule o quociente (a parte inteira) da divisão  de x p or y. Para isso, não deve 
    ser usada a função div.  
*/
#include <stdio.h>

int div (int dividendo, int divisor)
{
    if (dividendo<divisor){
        return 0;
    }else {
        return div(dividendo-divisor,divisor) + 1;
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
    printf("\n-> %d",ab);

}
