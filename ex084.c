/* 
    84. Escreva um programa que leia o peso e a altura de uma pessoa e verifique se ela está 
    dentro da faixa de peso adequada, ou se está abaixo ou acima do peso. Caso a pessoa 
    esteja fora do peso adequado o programa deve informar quantos Kg ela d eve gan har 
    ou perder para ficar dentro da faixa adequada. Para resolver este programa, considere 
    que o IMC ideal para uma pessoa deve estar entre 18 e 25.  
*/
#include <stdio.h>


int main()
{
    
    float altura,peso;

    printf("Abaixo, informe seu peso e altura.\n");
    printf("Peso (Kg): ");
    scanf("%f",&peso);
    printf("Altura (m): ");
    scanf("%f",&altura);

    float imc = peso/(altura*altura);
    float relacao = 1/(altura*altura);
    printf("Seu IMC � de: %.2f\n\n",imc);

    if (imc<18){
        float imc_restante = 18-imc;
        float peso_restante = imc_restante/relacao;
        float peso_ideal = peso+peso_restante;
        printf("Esta abaixo do IMC ideal (18).\n");
        printf("Voce precisa estar com %.2fKg para atingir o IMC ideal.\n",peso_ideal);
        printf("Eh necessario engordar %.2fKg.",peso_restante);
    } else if (imc>25){
        float imc_sobra = imc-25;
        float peso_sobra = imc_sobra/relacao;
        float peso_ideal = peso-peso_sobra;
        printf("Esta acima do IMC ideal (25).\n");
        printf("Voce precisa estar com %.2fKg para atingir o IMC ideal.\n",peso_ideal);
        printf("Eh necessario emagrecer %.2fKg.",peso_sobra);
    } else {
        printf("Seu IMC eh ideal, continue saudavel!");
    }
    return 0;
}
