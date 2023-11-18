/* 
    265. Escreva um subprograma recursivo que receba como entrada um número inteiro N 
    positivo e calcule o enésimo termo da série de Fibonacci.  
*/
#include <stdio.h>

int fibo (int x)
{
    if (x == 1 || x == 2){
        return 1;
    } else {
        return fibo(x-2) + fibo (x-1);
    }
}

int main()
{
    int num;
    printf("Informe um numero inteiro positivo --------> ");
    scanf("%d",&num);
    int termox = fibo(num);
    printf("O termo %d da sequencia de fibonacci eh ---> %d",num,termox);
}
