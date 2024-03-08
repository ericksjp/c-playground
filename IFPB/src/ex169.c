/* 
    169. Escreva um programa que leia um texto digitado pelo usuário até ler o caractere 
    enter, que não deve ser processado. O programa deve imprimir quantas vezes cada 
    letra foi digitada. (lembre -se, os ca ractere s ‘a’ e ‘A’) representam uma única letra. Se 
    você for usar a linguagem pascal, use o comando readkey para a leitura dos dados.  
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char texto [50001]="";
    printf("Digite um texto qualquer abaixo. \n\n-> ");
    fgets(texto,50002,stdin);
    fflush(stdin);

    texto[strcspn(texto, "\n")] = '\0';

    int len = strlen(texto);

    printf("\n",texto);

    for (int c=0; c<len; c++){
        texto[c]=toupper(texto[c]);
    }

    char letras [26];
    for (int c=0; c<26; c++){
        letras[c]='A'+c;
    }

    for (int c=0; c<26; c++){
        int contador=0;
        for (int c2=0; c2<len; c2++){
            if (letras[c]==texto[c2]){
                contador++;
            }

        }
        if (contador>0){
        printf("A letra %c foi digitada %d vezes.\n",letras[c],contador);
        }
    }
    return 0;

}
