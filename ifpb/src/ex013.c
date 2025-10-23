/* 
    13. Escreva um programa que leia um valor em KB e calcule o seu valor correspondente 
    em bits, bytes, MB e GB.  
*/
#include <stdio.h>
#define CONV 1024

int main() {
    printf("<<< exe013 >>>\n\n");

    float valor;

    printf("Digite um valor em KBs: ");
    scanf("%f",&valor);

    float bits = valor*CONV*8;
    float bytes = valor*CONV;
    float megabytes = valor/CONV;
    float gigabytes = valor/CONV/CONV;


    printf("Valor em bits: %.2f\nValor em bytes: %.2f\nValor em MG: %.2f\nValor em GB: %.2f\n",bits,bytes,megabytes,gigabytes);

    return 0;

}
