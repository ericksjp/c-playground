/*  
    252. Escreva um subprograma recursivo que receba como parâmetros de entrada dois 
    números inteiros M e N e calcule a soma de todos os números do intervalo [M, N].  
*/
#include <stdio.h>

int main()
{
    int m,n;
    printf("Informe o comeco do intervalo -> ");
    scanf("%d",&m);

    printf("Informe o fim do intervalo    -> ");
    scanf("%d",&n);

    int ss = intervalo(m,n);

    printf("%d",ss);
}

int intervalo(int m,int n)
{
    int soma = n;
    if (n==m){
        //printf("%d - ",soma);
        return soma;
    } else {
        //printf("%d - ",soma);
        soma += intervalo(m,n-1);
      //soma += intervalo(3,5);   ---->  soma += 3
      //soma += intervalo(3,4);   ---->  soma += 4
      //soma += intervalo(3,3);   ---->  soma += 5
    }
    return soma;
}
