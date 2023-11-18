/* 
    130. Escreva um programa que leia o número de pessoas que irão participar de um even to, 
    no qual será sorteado um prêmio, e, a seguir, leia o nome e o número do bilhete 
    recebido por cada uma destas pessoas. O programa deve informar o nome do 
    ganhador do prêmio, que é a pessoa cuja ordem de chegada é igual ao número do seu 
    bilhete. P ara ist o, você poder supor que: a ordem de chegada de cada pessoa 
    corresponde à ordem de leitura dos seus dados; sempre existe uma pessoa cujo 
    número do bilhete é igual a sua ordem de chegada; este caso acontece para apenas 
    uma pessoa.  
*/
#include <stdio.h>
#include <string.h>

int main()
{
    int numero;
    printf("Informe o numero de pessoas que vao participar do evento -> ");
    if (scanf("%d",&numero)==0){
        printf("Entrada invalida!!! Encerrando o programa...");
        return 0;
        exit(0);
    }
    printf("---------------------------------------\n");

    char nomes[200];

    int cont=1;
    int bilhete;
    while (cont<=numero){
        fflush(stdin);
        printf("Informe o nome da pessoa ----> ");
        fgets(nomes,201,stdin);
        int len = strlen(nomes);
        if (nomes[len-1]=='\n'){
            nomes[len-1]='\0';
        }
        printf("Informe o numero do bilhete -> ");
        scanf("%d",&bilhete);

        if (bilhete==cont){
            printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
            printf("%s FOI O/A GANHADOR(A)!!!",nomes);
            printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
            return 0;
            exit(0);
        } else{
            printf("---------------------------------------\n");
        }
        cont++;
    }
    printf("\nInfelizmente nao houve ganhadores!\n");
    return 0;

}
