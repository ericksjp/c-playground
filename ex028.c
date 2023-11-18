/* 
    28. Uma loja oferece três formas de pagamento para os seus clientes. Caso a compra seja 
    paga à vista, a loja oferece um desconto de 1 0%. Caso a compra seja paga em três 
    parcelas no cartão de crédito, o cliente paga o preço original (sem descontos, mas sem 
    juros) da compra. Caso a compra seja pa ga em dez parcelas no cartão de crédito, a loja 
    acrescenta uma taxa de juros de 20% sobre o va lor da compra. Todas as dez parcelas 
    têm exatamente o mesmo valor. Com base nes sas informações, escreva um programa 
    que leia o valor da compra de um cliente e informe: o valor da compra se ela for paga 
    à vista, o valor de cada parcela se a compra for p aga no cartão e em três parcelas (por exemplo, 3 parcelas de R$ 50,00) e o valor de cada parcela se a compra for paga com o  
    cartão de crédito e em dez parcelas.  
*/
#include <stdio.h>

int main()
{
    
    printf("<<< exe028 >>>\n\n");

    float valor;
    int opcao;

    printf("\n         Informe o valor da compra: R$");
    scanf("%f",&valor);

    printf("\n         ============== OP��ES DE PAGAMENTO ===============\n");
    printf("\n         1. A vista -> 10%% de desconto!!!\n");
    printf("\n         2. Parcelado em 3x -> Sem juros!!!\n");
    printf("\n         3. Parcelado em 10x -> 20%% sobre o valor da compra!!!\n");
    printf("\n         ==================================================\n");
    printf("         Opcao de pagamento desejada -> ");
    scanf("%d",&opcao);

    printf("         ==================================================\n");

    switch(opcao){
        case 1:{
            float desconto= valor-(valor*10/100);
            printf("         Valor final com 10%% de desconto: R$%.2f",desconto);
            break;
        }
        case 2:{
            float parcela3 = valor/3;
            printf("         Valor mensal parcelado em 3x sem juros: R$%.2f",parcela3);
            break;
        }case 3:{
            float parcela10 = (valor+(valor*10/100))/10;
            printf("         Valor mensal parcelado em 10x (20%% de juros sobre o valor da compra): R$%.2f",parcela10);
            break;
        }
        default:
            printf("         Opcao inexistente!");
    }
    printf("\n         ==================================================\n");
    printf("                          VOLTE SEMPRE!!!");
    return 0;
}
