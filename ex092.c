/* 
    92. Escreva um programa que leia um verbo regular no infinitivo (da 1ª, 2ª ou 3ª 
    conjugação) e imprima a sua conjugação no pre sente, pretérito perfeito e futuro do 
    presente do modo indicativo.  
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main()
{
    
    char verbo [51];

    printf("Informe um verbo regular no infinitivo (da 1ra, 2ra ou 3ra conjugacao).\n\n");
    printf("----> ");
    fgets(verbo, 52, stdin);
    printf("\n");

    int len = strlen(verbo)-1;
    int c = 1;

    //verificando se o input informado contem apenas letras
    while (c<=len){
        char a = verbo[len-c];
        if (!isalpha(a)){
            printf("Palavra invalida! Tente novamente...");
            fflush(stdin);
            getchar();
            exit(0);
        }
        if (c)
        c++;
    }

    //separando as duas ultimas letras da palavra para a realizacao da verificacao, e separando o corpo do palavra (que so todas as letras menos as 2 ultimas), para fazer a conjugaa
    tolower(verbo);
    char terminacao [3];
    char corpo [51];
    strncpy(terminacao, verbo+len-2,2);
    strncpy(corpo, verbo,len);
    corpo[len-2]='\0';

    //verificacao se a palavra informada termina em er, ar ou ir
    if (strcmp(terminacao,"er") && strcmp(terminacao,"ar") && strcmp(terminacao,"ir")){
        printf("Verbo invalido! Tente novamente...");
        fflush(stdin);
        getchar();
        exit(0);
    }

    // vai retirar a quebra de linha que o fgets deixa na string, evitando conflitos
    verbo[strcspn(verbo, "\n")] = '\0';

    if (!strcmp(terminacao,"ar")){ //conjugacao de palavras terminadas com ar
        printf("Conjugacao do verbo regular \"%s\" no presente do modo indicatio.\n",verbo);
        printf("1s -> Eu %so\n",corpo);
        printf("2s -> Tu %sas\n",corpo);
        printf("3s -> Ele/ela %sa\n",corpo);
        printf("1p -> Nos %samos\n",corpo);
        printf("2p -> Vos %sais\n",corpo);
        printf("3p -> Eles/elas %sam\n",corpo);

        printf("\nConjugacao do verbo regular \"%s\" no preterito perfeito do modo indicatio.\n",verbo);
        printf("1s -> Eu %sei\n",corpo);
        printf("2s -> Tu %saste\n",corpo);
        printf("3s -> Ele/ela %sou\n",corpo);
        printf("1p -> Nos %semos\n",corpo);
        printf("2p -> Vos %sastes\n",corpo);
        printf("3p -> Eles/elas %saram\n",corpo);

        printf("\nConjugacao no do verbo regular \"%s\" no futuro do presente do modo indicativo.\n",verbo);
        printf("1s -> Eu %sarei\n",corpo);
        printf("2s -> Tu %sars\n",corpo);
        printf("3s -> Ele/ela %sar�\n",corpo);
        printf("1�p -> Nos %saremos\n",corpo);
        printf("2�p -> Vos %sareis\n",corpo);
        printf("3�p -> Eles/elas %sar�o\n",corpo);

    } else if (!strcmp(terminacao,"er")){  //conjugacao de palavras terminadas com er
        printf("Conjugacao do verbo regular \"%s\" no presente do modo indicatio.\n",verbo);
        printf("1s -> Eu %so\n",corpo);
        printf("2s -> Tu %ses\n",corpo);
        printf("3s -> Ele/ela %se\n",corpo);
        printf("1p -> Nos %samos\n",corpo);
        printf("2p -> Vos %seis\n",corpo);
        printf("3p -> Eles/elas %sem\n",corpo);

        printf("\nConjugacao do verbo regular \"%s\" no preterito perfeito do modo indicatio.\n",verbo);
        printf("1s -> Eu %si\n",corpo);
        printf("2s -> Tu %seste\n",corpo);
        printf("3s -> Ele/ela %seu\n",corpo);
        printf("1p -> Nos %semos\n",corpo);
        printf("2p -> Vos %sestes\n",corpo);
        printf("3p -> Eles/elas %seram\n",corpo);

        printf("\nConjugacao no do verbo regular \"%s\" no futuro do presente do modo indicativo.\n",verbo);
        printf("1s -> Eu %serei\n",corpo);
        printf("2s -> Tu %seras\n",corpo);
        printf("3s -> Ele/ela %seria\n",corpo);
        printf("1p -> Nos %seremos\n",corpo);
        printf("2p -> Vos %sereis\n",corpo);
        printf("3p -> Eles/elas %serao\n",corpo);

    }  else if (!strcmp(terminacao,"ir")){ //conjugacao de palavras terminadas com ir
        printf("Conjugacao do verbo regular \"%s\" no presente do modo indicatio.\n",verbo);
        printf("1s -> Eu %so\n",corpo);
        printf("2s -> Tu %ses\n",corpo);
        printf("3s -> Ele/ela %se\n",corpo);
        printf("1p -> Nos %simos\n",corpo);
        printf("2p -> Vos %sis\n",corpo);
        printf("3p -> Eles/elas %sem\n",corpo);

        printf("\nConjugacao do verbo regular \"%s\" no preterito perfeito do modo indicatio.\n",verbo);
        printf("1s -> Eu %si\n",corpo);
        printf("2s -> Tu %siste\n",corpo);
        printf("3s -> Ele/ela %siu\n",corpo);
        printf("1p -> Nos %simos\n",corpo);
        printf("2p -> Vos %sistes\n",corpo);
        printf("3p -> Eles/elas %siram\n",corpo);

        printf("\nConjugacao no do verbo regular \"%s\" no futuro do presente do modo indicativo.\n",verbo);
        printf("1s -> Eu %sirei\n",corpo);
        printf("2s -> Tu %siras\n",corpo);
        printf("3s -> Ele/ela %sira\n",corpo);
        printf("1p -> Nos %siremos\n",corpo);
        printf("2p -> Vos %sireis\n",corpo);
        printf("3p -> Eles/elas %sirao\n",corpo);
    }

    //encerrando o programa de forma segura
    printf("\nPressione qualquer botao para sair...");
    fflush(stdin);
    getchar();
    exit(0);
}
