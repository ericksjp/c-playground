/* 
    223. Escreva um programa que l eia um número inteiro e verifique se ele é par ou ímpar. A 
    verificação de ser realizada através de um subprograma.  
*/
#include <stdio.h>

// 1 = impar | 2 = par
int imparPar(int num) {
    if (num % 2 == 0) return 0;
    else return 1;
}

int main() {
    int num;
    printf("Informe um valor inteiro: ");
    scanf("%d", &num);

    int ver = imparPar(num);

    if (ver == 1) printf("%d eh um numero impar.\n", num);
    else printf("%d eh um numero par.\n", num);

    return 0;
}