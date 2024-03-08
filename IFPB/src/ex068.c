/* 
    68. Escreva um programa que leia o valor do salário bruto de um empregado e calcule o 
    seu salário líquido. Para calcula r o val or do salário líquido, deve -se primeiramente 
    descontar uma taxa de 11%, correspondente ao valor da contribuição previdenciária. 
    Depois, do valor restante, deve -se descontar o valor do imposto de renda, que varia de 
    acordo com o valor do salário. O p ercentu al que deve ser descontado para o imposto 
    de renda varia de acordo com a tabela abaixo.  
    Salário  Alíquota  
    até 1.903,98  Isento  
    de     1.903,99 até 2.826,65  7,5%  
    de 2.826,66 até 3.751,05  15% 
    de 3.751,06 até 4.664,68  22,5%  
    a partir de 4.664,69  27,5% 
*/
#include <stdio.h>

int main()
{
    printf("<<< exe068 >>>\n\n");
    float salario;
    printf("Informe o valor do seu salario bruto: R$");
    scanf("%f",&salario);

    float salario_desconto = salario - (salario*11/100);
    float salario_liquido = 0;

    if (salario_desconto<1903.99){
        salario_liquido += salario_desconto;
    } else if(salario_desconto>=1903.99 && salario_desconto<=2826.65){
        salario_liquido += salario_desconto - (salario_desconto*7.5/100);
    } else if (salario_desconto>=2826.66 && salario_desconto<=3751.05) {
        salario_liquido += salario_desconto - (salario_desconto*15/100);
    } else if (salario_desconto>=3751.06 && salario_desconto<=4664.68) {
        salario_liquido += salario_desconto - (salario_desconto*22.5/100);
    } else{
        salario_liquido += salario_desconto - (salario_desconto*27.5/100);
    }

    printf("Valor do seu salario liquido: R$%.2f",salario_liquido);
    return 0;
}
