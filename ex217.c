/* 
    217. Escreva um programa que leia um número positivo entre 1 e 9999 e calcule o valor 
    da unidade de milhar, da cente na, da dezena e da unidade. O programa deve ter 
    subprogramas para calcular cada informação solicitada.  
*/
#include <stdio.h>

int milhar(int valor) {
    return valor / 1000;
}

int centena(int valor) {
    return valor % 1000 / 100;
}

int dezena(int valor) {
    return valor % 1000 / 10 % 10; 
}

int unidade(int valor) {
    return valor % 10; 
}

int main() {
    int valor;
    printf("Informe um valor inteiro entre 1 e 9999: ");
    scanf("%d", &valor);

    int mil = milhar(valor);
    int cen = centena(valor);
    int dez = dezena(valor);
    int uni = unidade(valor);


    printf("Milhar: %d\n", mil);
    printf("Centena: %d\n", cen);
    printf("Dezena: %d\n", dez);
    printf("Unidade: %d\n", uni);
    return 0;
}