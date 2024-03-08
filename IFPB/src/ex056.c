/* 
    56. A Cifra de César é um método de criptografia em que cada letra da mensagem original 
    é substi tuída p or outra e a distância entre cada letra original e a sua substituta na 
    mensagem enviada é sempre a mesma. Por exemplo, se a letra a da mensagem é 
    substituída pela letra f na mensagem enviada, então a letra b será substituída pelo g, o 
    c pelo h, o d pelo i e assim sucessivamente, até que a letra y será substituída pelo d e o 
    z pela letra e. Com base nestas informações, escreva um programa que leia um 
    caractere representando uma das letras da mensagem original, outro caractere 
    representando a letra que  vai su bstituí -lo na nova mensagem, e um terceiro caractere 
    representando outra letra da mensagem original e determine a letra que vai substituí -
    la na nova mensagem.  
*/
#include <stdio.h>
#include <ctype.h>

char cifrar(char LetraOriginal, char LetraCodificada, char previsao) {
    LetraOriginal = tolower(LetraOriginal);
    LetraCodificada = tolower(LetraCodificada);
    previsao = tolower(previsao);

    int distancia = (int)LetraCodificada - (int)LetraOriginal;

    int teste = previsao + distancia;

    if (teste > 122) {
        teste = 96 + (teste - 122);
    }

    if (teste < 97) {
        teste = 123 - (97 - teste);
    }

    return (char)teste;
}

int main() {
    char a,b,c;
    printf("Informe um caracter da mensagem original: ");
    a = getchar();
    while(getchar() != '\n');
    printf("Informe um caracter da mensagem criptografada: ");
    b = getchar();
    while(getchar() != '\n');
    printf("Informe uma letra a ser criptograda: ");
    c = getchar();
    while(getchar() != '\n');

    char cripto = cifrar(a,b,c);

    printf("A letra %c se tornara %c na mensagem criptografada.\n", c, cripto);

    return 0;
}