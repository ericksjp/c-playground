/* 
    18. Escreva um programa que leia o valor do seno de um âng ulo e calcule o valor do seu 
    cosseno.  
*/
#include <stdio.h>
#include <math.h>

int main() {
    float seno;
    printf("<<< exe018 >>>\n\n");

    printf("Informe o valor do seno: ");
    scanf("%f",&seno);

    float cosseno = sqrt(1 - pow(seno,2));

    printf("Cosseno do seno informado: %.3f",cosseno);
    return 0;

}
