/* 
    66. Escreva um programa que leia o número de pessoas que vão partic ipar de  um 
    churrasco e calcule quantos quilos de carne devem ser comprados. Para isso, 
    considere que cada pessoa consome 250 g de carne. A resposta do programa deve ser 
    um número inteiro.  
*/
#include <stdio.h>

int main()
{
    printf("<<< exe066 >>>\n\n");
    int pessoas;
    printf("Informe a quantidade de pessoas que vao participar do churrasco: ");
    scanf("%d",&pessoas);

    int fator = 0;

    if (pessoas>0){
        fator = 1;
    }

    int carne=pessoas*250/1000+fator;

    printf("A quantidade de carne para %d pessoas deve ser %dKg",pessoas,carne);
    return 0;
}
