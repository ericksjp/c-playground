/* 
    78. Alfredo tem um carro flex e sempre fica na dúvida se é melhor abastecê -lo com álcool 
    ou gasolina. Um dia um de seus amigos o ensinou a seguinte dica: “Pegue o valor do 
    preço da gasolina e multiplique por 0,7. Se o valor for menor ou igual ao valor do preço 
    do álcool, abasteça com gas olina. Caso contrário, abasteça com álcool.” Com base 
    nestas informações, escreva um programa que leia o preço do litro da gasolina e do 
    álcool e verifique se é melhor abastecer com álcool ou com gasolina.  
*/
#include <stdio.h>


int main()
{
    
    float alcool,gasolina;

    printf("Informe o preco da gasolina: R$");
    scanf("%f",&gasolina);
    printf("Informe o preco do alcool: R$");
    scanf("%f",&alcool);

    gasolina = gasolina*0.7;
    if (gasolina<=alcool){
        printf("Eh melhor abastecer com gasolina.");
    } else{
        printf("Eh melhor abastecer com alcool.");
    }
    return 0;

}
