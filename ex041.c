/* 
    41. Escreva um programa que leia a quantidade de horas trabalhadas por um funcionário 
    de uma empresa durante um mês e o valor de cada hora trabalhada e determine o seu 
    pagamento. O programa deve considerar  que a carga -horária mensal do funcionário é 
    de 160 horas e que o valor de cada hora extra corresponde ao valor da hora 
    trabalhada acrescido de uma taxa de 50%. 
    
    Para resolver a questão, considere que a 
    quantidade de horas trabalhadas nunca será inferior a  160.  
*/
#include <stdio.h>

int main()
{
    printf("<<< exe040 >>>\n\n");
    int carga_horaria;
    float valor,horas_extras,salario,valor_horas_extras;
    printf("Informe a carga horaria do funcionario (horas): ");
    scanf("%d",&carga_horaria);
    printf("Informe o valor de cada hora trabalhada: R$ ");
    scanf("%f",&valor);

    horas_extras = carga_horaria-160;
    valor_horas_extras = horas_extras*valor*150/100;
    salario = 160*valor + valor_horas_extras;

    printf("Salario: R$%.2f",salario);
    return 0;
}
