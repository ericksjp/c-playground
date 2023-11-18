/* 
    65. Escreva um programa que leia a idade de uma pessoa e verifique se ela é criança (0 -12 
    anos), adolescente (13 -17 anos), adulta (18 -59) ou idosa (acima de 60 anos).  
*/
#include <stdio.h>


int main()
{
    printf("<<< exe065 >>>\n\n");
    
    int idade;
    printf("Informe sua idade: ");
    scanf("%d",&idade);

    if (idade<=12){
        printf("Voce eh uma crianca!");
    } else if (idade>12 && idade<=17){
        printf("Voce eh um adolescente!");
    } else if (idade>17 && idade<=59){
        printf("Voce eh um adulto!");
    } else {
        printf("Voce eh um idoso!");
    }
    return 0;
}
