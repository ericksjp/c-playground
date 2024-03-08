/* 
    272. Escreva u m subprograma recursivo que receba como entrada um número inteiro n e 
    um número inteiro positivo k e identifique o k -ésimo dígito do número n (da direita 
    para a esquerda). Por exemplo, se n for 1957 e k for igual a 3, o resultado do 
    subprograma deve  ser o número 9.  
*/
#include <stdio.h>

int kesimo (int n, int k)
{
    if (k==1){
        return n%10;
    } else {
        return kesimo(n/10,k-1);
    }
}


int main()
{
    printf("%d",kesimo(1957,2));
}