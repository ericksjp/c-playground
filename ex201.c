/* 
    201. Escreva um programa que leia o núm ero int eiro positivo e calcule o seu dobro, o seu 
    triplo, o seu quadrado, o seu cubo e a sua raiz quadrada. Cada uma das informações 
    solicitadas deve ser calculada através de um subprograma.  
*/
#include <stdio.h>
#include <math.h>

int dobro(int num)
{
    return num * 2;
}

int triplo (int num)
{
    return num * 3;
}

int quadrado(int num)
{
    return num * num;
}

int cubo (int num)
{
    return num * num * num;
}

float raiz(int num)
{
    return sqrt(num);
}

int main()
{
    int num;
    printf("Informe um numero inteiro -> ");
    scanf("%d",&num);

    int valdobro = dobro(num);
    int valtriplo = triplo(num);
    int valquadrado = quadrado(num);
    int valcubo = cubo(num);
    float valraiz = raiz(num);

    printf("\nDobro -> %d\n",valdobro);
    printf("Triplo -> %d\n",valtriplo);
    printf("Quadrado -> %d\n",valquadrado);
    printf("Cubo -> %d\n",valcubo);
    printf("Raiz -> %f\n",valraiz);
    return 0;
}
