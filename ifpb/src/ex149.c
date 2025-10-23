/* 
    149. Escreva um programa que leia vários itens de uma compra feita pelo usuário. Para 
    cada item, o usuário de ve info rmar o seu nome, o seu preço unitário e a quantidade 
    comprada. Após cada leitura, o programa deve perguntar ao usuário se ele deseja 
    adicionar um novo item ou fechar a conta. O programa deve considerar que o 
    usuário irá digitar pelo menos um item. A pós ter minar a leitura, o programa deve 
    mostrar o valor da conta à vista e o valor da conta a prazo. O valor da conta a prazo 
    corresponde à soma do valor total de cada item digitado pelo usuário. O valor da 
    conta à vista corresponde ao valor da conta a prazo com um desconto de 15%.  
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    int total=0;

    printf("=============== SUPERMERCADO QUALQUER COISA PQ TO SEM CRIATIVIDADE ===============\n\n");

    while (1){
        fflush(stdin);
        char nome[30]="";
        float preco=0;
        int quantidade=1;
        printf("Informe o nome do produto  -------------> ");
        fgets(nome,31,stdin);
        printf("Informe o preco do produto -------------> ");
        scanf("%f",&preco);
        printf("Informe a quantidade produtos desejada -> ");
        scanf("%d",&quantidade);
        fflush(stdin);

        int soma = preco*quantidade;
        total+=soma;

        char resp=' ';
        printf("\nDeseja comprar outro produto ? \n S se SIM \n N se NAO \n");
        printf(" -> ");
        resp = getchar();
        resp = toupper(resp);

        printf("\n");

        sleep(0.5);
        system("cls");
        printf("=============== SUPERMERCADO QUALQUER COISA PQ TO SEM CRIATIVIDADE ===============\n\n");

        if (resp!='S'){
            break;
        }

    }
    float preco_vista = total - (total*15/100);
    float preco_prazo = total;
    printf("Preco total a vista (15%% de desconto) -> R$%.2f\n",preco_vista);
    printf("Preco total a prazo -------------------> R$%.2f\n",preco_prazo);
    return 0;
}
