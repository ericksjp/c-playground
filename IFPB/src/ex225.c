/* 
    225. Escreva um programa que leia dois números inteiros M e N e verifique se N é 
    múltiplo de M. Esta verificação deve ser realizada através de um subprograma.  
*/
#include <stdio.h>

int ehMultiplo(int m, int n) {
    if ((m == 0 && n == 0) || (n % m == 0)) return 1;
    else return 0;
}

int main(){
    int m,n;
    printf("Digite o valor de M: ");
    scanf("%d", &m);
    printf("Digite o valor de N: ");
    scanf("%d", &n);

    int ehMult = ehMultiplo(m,n);

    if (ehMult) printf("%d eh multiplo de %d.\n", n,m);
    else printf("%d nao eh multiplo de %d.\n", n,m);

    return 0;
}