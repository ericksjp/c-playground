/* 
    4. Escreva um programa que leia o número inteiro positivo e calcule o seu dobro, o seu 
    triplo, o seu quadrado, o seu cubo e a sua raiz quadrada.  
*/
#include <stdio.h>
#include <math.h>

int main() {
    printf("<<< ex004 >>>\n\n");

    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d",&numero);

    int dobro = numero*2;
    int triplo = numero*3;
    int cubo = pow(numero,3);
    float raiz = sqrt(numero);

    printf("Dobro: %d\nTriplo: %d\nCubo: %d\nRaiz quadrada: %f\n",dobro,triplo,cubo,raiz);
    
    return 0;
}
