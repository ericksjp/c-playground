/* 
    211. Escreva um programa que leia o valor do raio de uma esf era e d etermine o seu 
    volume. O cálculo deve ser real izado através de um subprograma  
*/
#include <stdio.h>
#include <math.h>

float calcVolume(float raio) {
    return (4/3) * M_PI * pow(raio, 3);
}

int main() {
    float raio;
    printf("Informe o raio da esfera: ");
    scanf("%f", &raio);

    float volume = calcVolume(raio);

    printf("O volume da esfera eh de %.2f \n", volume);

    return 0;
}