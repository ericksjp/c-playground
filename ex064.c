/* 
    64. Escreva um programa que leia um número inteiro e verifique se ele é pos itivo, 
    negativo ou neutro.  
*/
#include <stdio.h>


int main()
{
    printf("<<< exe064 >>>\n\n");
    
    int numero;
    printf("Informe um numero inteiro: ");
    scanf("%d",&numero);

    if (numero>0){
        printf("%d EH um numero POSITIVO!",numero);
    } else if (numero<0){
        printf("%d EH um numero NEGATIVO!",numero);
    } else {
        printf("%d EH um numero NEUTRO!",numero);
    }
    return 0;
}
