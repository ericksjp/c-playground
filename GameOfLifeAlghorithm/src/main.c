/*
    GAME OF LIFE

    Simulação de espensão bacteriana

    REGRAS DO JOGO

    -> total de vizinhos < 2 = morte por solidão
    -> total de vizinhos > 3 = morte por esgotamento de recursos
    -> total de vizinhos >=2 && total de vizinhos <= 3 = vida

    - Como representar os cenários?
    Podemos representar através de matrizes bidimencionais

    - Como representar as bacterias?
    Já que vamos representar o cenário em uma matriz, utilizaremos números como 0 e 1: caso o frame seja 0, frame vazio; caso seja 1, é uma bacteria.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "vida.h"

Parameters setParameters(int argc, char *argv[], Parameters p);

int main(int argc, char *argv[]) {
  Parameters p = setParameters(argc, argv, p);
  cleanScreen();
  showLife(p);
}


int validateParameter(char str[], int size){
  if (size < 3){
    printf("Invalid parameter: %s\n", str);
    exit(1);
  }

  for (int c = 2; c < size; c++){
    if ((int)str[c] < 48 || (int)str[c] > 57){
      printf("Invalid parameter: %s\n", str);
      exit(1);
    }
  }
}

int toNumber(char str[], int size) {
  char *ptr = str + 2;
  int number;

  number = strtol(ptr, NULL, 10);

  return number;
}

Parameters setParameters(int argc, char *argv[], Parameters p){
    p = inicializaParameters(p);

    for (int i = 1; i < argc; i++) {
      char parameter = argv[i][0];
      switch(parameter){
        case 'l': {
          validateParameter(argv[i], strlen(argv[i]));
          p.matrizLines = toNumber(argv[i], strlen(argv[i]));
          break;
        }
        case 'c':
          validateParameter(argv[i], strlen(argv[i]));
          p.matrizColumns = toNumber(argv[i], strlen(argv[i]));
          break;
        case 'p':
          validateParameter(argv[i], strlen(argv[i]));
          p.lifeProbInInicialization = toNumber(argv[i], strlen(argv[i]));
          break;
        case 't':
          validateParameter(argv[i], strlen(argv[i]));
          p.taxaAtualizacaoSegundos = toNumber(argv[i], strlen(argv[i]));
          break;
        case 'd':
          validateParameter(argv[i], strlen(argv[i]));
          p.showInfo = toNumber(argv[i], strlen(argv[i]));
          break;
        case 'i':
          validateParameter(argv[i], strlen(argv[i]));
          p.iteracoes = toNumber(argv[i], strlen(argv[i]));
          break;
        default:{
              printf("Invalid parameter: %s\n", argv[i]);
              exit(1);
              break;
        }
      }
  }
  return p;
}
