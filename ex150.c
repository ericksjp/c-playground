/* 
    150. Escreva um programa que leia dois números inteiros positivos N e M e use o método 
    das aproximações sucessivas de Newton para determinar a raiz enésima de M. De 
    acordo com o método de Newton, são calculados diversos elementos x k, de aco rdo 
    com a s equações  abaixo. Inicialmente, deve ser calculado o valor de x 1. Se for 
    necessário, devem ser calculados os valores de x 2, x 3 e assim sucessivamente. O 
    cálculo dos números deve ser encerrado quando for gerado um valor x k de forma que 
    o va lor abs oluto d a diferença entre o valor de x k e o valor de x k-1 seja menor do que a 
    precisão desejada. Quando isso acontece, o último x k gerado corresponde ao valor da 
    raiz. Para calcular a raiz, considere x 0 = 1 e a precisão de 0,0001.  
*/
#include <stdio.h>
#include <math.h>
//em caso de n->2 e m->5

int main()
{
    int num1,num2;
    printf("Informe um numero inteiro: ");
    scanf("%d",&num1);
    printf("Informe outro numero inteiro: ");
    scanf("%d",&num2);

    float x1 = 1,x2,prec = 0.0001;

    while (1){
        x2 = ((num1 - 1) * x1 + num2 / pow(x1, num1 - 1)) / num1;
        if (fabs(x1 - x2) < prec) {
            break;
        }
        x1 = x2;
    }

    printf("A raiz %d-esima de %d eh %f",num1,num2,x2);
    return 0;


}
