/* 
    229. Escreva um programa que leia os valores dos três lados de um triângulo e o 
    classifique como equilátero, isósceles ou escaleno. Esta verificação deve ser realizada 
    através de um subprograma.  
*/
#include <stdio.h>

// typedef enum {
//     EQUILATERO = 1,
//     ISOSCELES = 2,
//     ESCALENO = 3,
// } TIPO;

//1 - equilatero | 2 - isosceles | 3 - escaleno  
int tipoTriangulo(float l1, float l2, float l3) {
    if (l1 + l2 + l3 == l1 * 3) return 1;
    else if (l1 == l2 || l2 == l3 || l1 == l3) return 2;
    else return 3;
}

int main() {
    float l1, l2, l3;
    printf("Informe o lado 1 do triangulo: ");
    scanf("%f", &l1);
    printf("Informe o lado 2 do triangulo: ");
    scanf("%f", &l2);
    printf("Informe o lado 3 do triangulo: ");
    scanf("%f", &l3);
    printf("--------------------------------------------------\n");

    int tipo = tipoTriangulo(l1,l2,l3);

    if (tipo == 1) {
        printf("O triangulo eh equilatero!");
    } else if (tipo == 2) {
        printf("O triangulo eh isosceles!");
    } else {
        printf("O triangulo eh escaleno!");
    }
    printf("\n");

    return 0;
}