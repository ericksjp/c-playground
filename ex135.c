/* 
    135. Escreva um programa que simule uma votação. O programa deve computa r o vot o de 
    20 eleitores e depois deve imprimir a quantidade  e o percentual de votos recebid os 
    por cada candidato, bem como a quantidade e o percentual de votos nulos. As opções 
    de voto são:  
    [1] João Borracheiro  
    [2] Zé do caminhão  
    [3] Maria da bodega  
    [4] Ana  
*/
#include <stdio.h>

#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>

int main()
{
    
    printf("   ****** SISTEMA DE VOTACAO ******\n\n");
    printf("*NAO SAIA ATE APARECER A MENSAGEM: \"Voto computado com sucesso!\"\n");
    printf("=========== OPCOES DE VOTO ===========\n");
    printf("         [1] Joao Borracheiro\n");
    printf("         [2] Ze do caminhao\n");
    printf("         [3] Maria da bodega\n");
    printf("         [4] Ana\n");
    printf("=======================================\n");

    int joaob_votos=0,zedoc_votos=0,maria_votos=0,ana_votos=0,nulo_votos=0;
    char nomes[5][25]={"Jo�o Borracheiro","Ze do caminh�o","Maria da bodega","Ana"};
    char num_str[501];
    int cont=0;

while (cont<20){

        fflush(stdin);
        printf("Informe o numero do seu candidato ---> ");
        fgets(num_str, 502, stdin);

        int check = 0;
        int len = strlen(num_str)-1;

        int c=0;
        while (c<len){
            char a = num_str[c];

            if (!isdigit(a)){
                check = 1;
            }

        c++;
        }

        if (check==1){
            printf("=================================================================================\n");
            printf("                                 Erro!!!                                         \
                   \nS�o suportados apenas numeros inteiros como caravteres validos, tente novamente.");
            printf("\n=================================================================================\n\n");
            continue;
        }
        int num = atoi(num_str);

        printf("===========================================\n");

        int confirm;

        if (num>4 || num<1){
            printf("[%d] Nulo\n",num);
        } else{
            printf("[%d] %s\n",num,nomes[num-1]);
        }

        printf("Pressione %d para confirmar seu voto.\n-----------------------------------> ",num);
        scanf("%d",&confirm);
        if (confirm!=num){
            printf("===========================================\n");
            printf("Voto nao computado! Tente novamente.\n");
            printf("===========================================\n\n");
            continue;
        } else {
            if (confirm==1){ joaob_votos+=1;}
            else if (confirm==2){zedoc_votos+=1;}
            else if (confirm==3){maria_votos+=1;}
            else if (confirm==4){ana_votos+=1;}
            else {nulo_votos+=1;}
        }

        printf("===========================================\n");
        printf("Voto computado com sucesso!\n");
        printf("===========================================\n\n");
        cont++;

        sleep(2);
        system("cls");

        if (cont<20) {
            printf("*NAO SAIA ATE APARECER A MENSAGEM: \"Voto computado com sucesso!\"\n\n");
            printf("=========== OPCOES DE VOTO ===========\n");
            printf("         [1] Joao Borracheiro\n");
            printf("         [2] Ze do caminh�o\n");
            printf("         [3] Maria da bodega\n");
            printf("         [4] Ana\n");
            printf("=======================================\n");
        }
    }
    int total_votos = zedoc_votos+joaob_votos+maria_votos+ana_votos+nulo_votos;
    int total_votos_validos = zedoc_votos+joaob_votos+maria_votos+ana_votos;

    float zedoc_p = zedoc_votos*100/20;
    float joaob_votos_p = joaob_votos*100/20;
    float maria_votos_p = maria_votos*100/20;
    float ana_votos_p = ana_votos*100/20;
    float nulo_votos_p = nulo_votos*100/20;
    float total_votos_validos_p = total_votos_validos*100/20;

    printf("        ***** RESULTADOS *****\n\n");

    printf("=======================================\n");
    printf("Jo�o Borracheiro -> %%%.2f (%d votos)\n",joaob_votos_p,joaob_votos);
    printf("=======================================\n");
    printf("Z� do caminh�o   -> %%%.2f (%d votos)\n",zedoc_p,zedoc_votos);
    printf("=======================================\n");
    printf("Maria da bodega  -> %%%.2f (%d votos)\n",maria_votos_p,maria_votos);
    printf("=======================================\n");
    printf("Ana              -> %%%.2f (%d votos)\n",ana_votos_p,ana_votos);
    printf("=======================================\n\n");

    printf("Total de votos   -> 20\n");
    printf("Votos nulos      -> %%%.2f (%d votos)\n",nulo_votos_p,nulo_votos);
    printf("Votos v�lidos    -> %%%.2f (%d votos)\n\n",total_votos_validos_p,total_votos_validos);
    printf("Pressione qualquer tecla para sair...");
    return 0;
}
