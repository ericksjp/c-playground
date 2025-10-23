/* 
    17. Escreva um programa que leia a área de uma casa e o valor cobrado por um arquiteto 
    por cada metro quadrado de um projeto arquitetônico e calcule o custo final do 
    projeto.  
*/
#include <stdio.h>
#include <string.h>

int main (){
    
    printf("<<< exe017 >>>\n\n");

    float area;
    float valor;

    printf("Informe a area da casa (m2): ");
    scanf("%f",&area);
    printf("Valor cobrado por m2: ");
    scanf("%f",&valor);

    float preco_final=area*valor;

    printf("O valor final do projeto vai ser R$%.2f.",preco_final);
    return 0;
}



