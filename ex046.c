/* 
    46. Escre va um programa que leia um número inteiro entre 0 e 999 e calcule o seu 
    reverso. Você deve sempre considerar que o número lido tem três algarismos. Desta 
    forma, o reverso de 195 deve ser 591, o de 768 deve ser 867, de 3 deve ser 300, o de 
    40 deve se r 40, o  de 500 deve ser 5, e assim sucessivamente. O programa deve 
    armazenar o valor do reverso em uma variável antes de exibi -lo para o usuário.  
*/
#include <stdio.h>

int main()
{
    printf("<<< exe046 >>>\n\n");

    int numero,centena,dezena,unidade,reverso;
    printf("Informe um inteiro entre 0 e 999: ");
    scanf("%d",&numero);

    centena = numero/100;
    dezena = (numero%100)/10;
    unidade = (numero%100)%10;
    reverso = (unidade*100)+ (dezena*10) + centena;

    printf("Reverso: %d",reverso);
    return 0;
}
