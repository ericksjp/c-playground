/* 
    36. Escreva um programa que leia dois números inteiros e os armazene em duas variáveis 
    a e b. Após a leitura, o programa deve permutar os valores armazenados nas duas 
    variáveis. O programa deve imprimir os valores das duas variáveis antes e após a 
    permutaçã o.  
*/
#include <stdio.h>

int main(){
    printf("<<< exe036 >>>\n\n");
    int valor1,valor2,valor3;
    printf("Valor 1: ");
    scanf("%d",&valor1);
    printf("Valor 2: ");
    scanf("%d",&valor2);

    printf("Antes da permutacao: Valor 1 = %d | Valor 2 = %d\n",valor1,valor2);
    valor3 = valor2;
    valor2 = valor1;
    valor1 = valor3;
    printf("Depois da permutacao: Valor 1 = %d | Valor 2 = %d",valor1,valor2);
    return 0;

}
