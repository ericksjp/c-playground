/* 
    273. Escreva um subprograma recursivo que receba como entrada um string contendo a 
    sequência de resultados de um time e calcule a sua pontuação, considerando que V representa vitória e vale 3 pontos, 
    E representa empate e vale um ponto e D represent a derrota e não vale qualquer ponto.  
    
    Por exemplo, se a entrada do programa for VVVEEDDVED, a pontuação do time é 15.  
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int pontuacao (char *string)
{
    int len = strlen(string);
    char davez = toupper(string[len-1]); 
    if (len==1){
        if (davez=='V'){
            return 3;
        } else if (davez=='E'){
            return 1;
        } else{
            return 0;
        }
    } else {
        string[len-1]='\0';
        if (davez=='V'){ 
            return pontuacao(string) + 3; 
        } else if (davez=='E'){
            return pontuacao(string) + 1;
        } else{
            return pontuacao(string) + 0;
        }
    }
}

int main()
{
    char pont[11];
    printf("-> ");
    fgets(pont,11,stdin);

    printf("A pontuacao do time foi de %d pontos.",pontuacao(pont));
}