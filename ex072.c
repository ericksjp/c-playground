/* 
    72. João resolveu poupar dinheiro para comprar um carro. Para isso, ele decidiu que todo 
    mês irá poupar 25% do seu salário, até conseguir juntar um bom va lor par a ser dado 
    como entrada. Com base nestas informações, escreva um programa que receba como 
    entrada o valor do salário atual de João e o valor que ele deseja juntar como entrada e 
    calcule quanto tempo ele terá que trabalhar para conseguir juntar o val or dese jado. A 
    resposta deve ser dada na forma x anos e y meses. 
*/
#include <stdio.h>

int main()
{
    printf("<<< exe072 >>>\n\n");
    float salario,entrada;
    printf("Informe seu salario: R$");
    scanf("%f",&salario);
    printf("Informe o valor que quer dar como entrada: R$");
    scanf("%f",&entrada);

    float poupanca = salario*25/100;

    int mes = entrada/poupanca;


    if (mes!=0){
        mes+=1;
    }

    if (mes>=13 && mes<25){
        mes-=1;
    }

    int ano = mes/13;
    int fator = mes/13;
    mes = mes%13+fator;

    printf("Voce tera que trabalhar %d anos e %d meses para conseguir juntar o valor desejado.",ano,mes);
    return 0;
}
