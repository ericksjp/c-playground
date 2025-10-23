/* 
    60. Escreva um programa que leia o número de pessoas que vão participar de um 
    churrasco e calcule quantos quilos de carne devem ser comprados. Para isso, 
    considere que cada pessoa consome 250 g de carne.  
*/
#include <stdio.h>
#include <string.h>

int main()
{
    printf("<<< exe060 >>>\n\n");
    int pessoas;
    printf("Informe a quantidade de pessoas que vao participar do churrasco: ");
    scanf("%d",&pessoas);

    float carne=(float)pessoas*250/1000;

    if (carne==(int)carne){
        printf("A quantidade de carne para %d pessoas deve ser %dKg",pessoas,(int)carne);
    } else {
        printf("A quantidade de carne para %d pessoas deve ser %.3fKg",pessoas,carne);
    }
    return 0;
}
