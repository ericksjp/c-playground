/* 
    246. Escreva um programa que leia um verbo regular no infinit ivo (da 1ª, 2ª ou 3ª 
    conjugação) e imprima a sua conjugação no presente, pretérito perfeito e futuro do 
    presente do modo indicativo. O programa deve ter um subprograma para determinar 
    o radical, um subprograma para determinar a vogal temática, e um subprog rama 
    para conjugar o verbo em cada tempo verbal solicitado.  
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include <ctype.h>

void cleanfgets(char input[])
{
    int len = strlen(input);
    if (len > 0 && input[len - 1] == '\n') {
        input[len - 1] = '\0';
    }
}

void radical (char palavra[])
{
    char radicalC[500]="";
    int len = strlen(palavra);
    palavra[len-2]='\0';
}

void vogal_tematica (char palavra[])
{
    int len = strlen(palavra);
    //printf("%c",palavra[len-2]);
    sprintf(palavra,"%c",palavra[len-2]);
}

void presente_indicativo (char radicalC[], char vogal_tematicaC[]){

    printf("Eu %so\n",radicalC);
    printf("Tu %s%ss\n",radicalC,vogal_tematicaC);
    if (tolower(vogal_tematicaC[0])=='a'){
        printf("Ele/Ela %sa\n",radicalC);
    } else {
        printf("Ele/Ela %se\n",radicalC);
    }
    printf("Nos %s%smos\n",radicalC,vogal_tematicaC);
    if (tolower(vogal_tematicaC[0])=='i'){
        printf("Vos %s%ss\n",radicalC,vogal_tematicaC);
    } else {
        printf("Vos %s%sis\n",radicalC,vogal_tematicaC);
    }
    if(tolower(vogal_tematicaC[0])=='a'){
        printf("Eles/Elas %s%sm\n",radicalC,vogal_tematicaC);
    } else {
        printf("Eles/Elas %sem\n",radicalC);
    }
}

void preterito_perfeito (char radicalC[], char vogal_tematicaC[]){

    if(tolower(vogal_tematicaC[0])=='a'){
        printf("Eu %sei\n",radicalC);
    } else {
        printf("Eu %si\n",radicalC);
    }

    printf("Tu %s%sste\n",radicalC,vogal_tematicaC);

    if(tolower(vogal_tematicaC[0])=='a'){
        printf("Ele/Ela %sou\n",radicalC);
    } else {
        printf("Ele/Ela %s%su\n",radicalC,vogal_tematicaC);
    }

    printf("Nos %s%smos\n",radicalC,vogal_tematicaC);
    printf("Vos %s%sstes\n",radicalC,vogal_tematicaC);

    printf("Eles/Elas %s%sram\n",radicalC,vogal_tematicaC);
}

void futuro_de_presente (char radicalC[], char vogal_tematicaC[]){

    printf("Eu %s%srei\n",radicalC,vogal_tematicaC);
    printf("Tu %s%sras\n",radicalC,vogal_tematicaC);
    printf("Ele/Ela %s%sra\n",radicalC,vogal_tematicaC);
    printf("Nos %s%sremos\n",radicalC,vogal_tematicaC);
    printf("Vos %s%sreis\n",radicalC,vogal_tematicaC);
    printf("Eles/Elas %s%srao\n",radicalC,vogal_tematicaC);
}



void conjugacao (char palavra[])
{
    
    char radicalC[501]="";
    char vogal_tematicaC [501]="";
    strcpy(radicalC,palavra);
    strcpy(vogal_tematicaC,palavra);

    radical(radicalC);
    vogal_tematica(vogal_tematicaC);

    printf("\nRadical --------> %s\n",radicalC);
    printf("Vogal tematica -> %s\n\n",vogal_tematicaC);

    printf("Presente do Indicativo:\n");
    presente_indicativo(radicalC,vogal_tematicaC);
    printf("\nPreterito Perfeito:\n");
    preterito_perfeito(radicalC,vogal_tematicaC);
    printf("\nFuturo do Presente do Indicativo:\n");
    futuro_de_presente(radicalC,vogal_tematicaC);

}

int main()
{
    char palavra [501];
    printf("Informe um verbo qualquer -> ");
    fgets(palavra,502,stdin);
    cleanfgets(palavra);
    conjugacao (palavra);
    return 0;
}
