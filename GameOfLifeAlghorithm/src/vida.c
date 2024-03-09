#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <unistd.h>

#include "vida.h"

 #ifdef _WIN32
  void cleanScreen(){
    system("cls");
  }
#else
  void cleanScreen(){
    system("clear");
  }
#endif

Parameters inicializaParameters(Parameters p){
  p.matrizColumns = 50;
  p.matrizLines = 25;
  p.lifeProbInInicialization = 50;
  p.taxaAtualizacaoSegundos = 2;
  p.iteracoes = 100;
  p.showInfo = 1;

  return p;
}

void iniciateMatrix(int *matriz, int lines, int columns, int testParameter){
    srand(time(NULL));
    for (int i = 0; i < lines; i++) {
        for (int j = 0; j < columns; j++) {
            if ((rand() % 100) < testParameter) {
                *(matriz + i * columns + j) = 1;
            } else {
                *(matriz + i * columns + j) = 0;
            }
            // *(matriz + i * matrizSize + j) = rand() % 2;
        }
    }
}


void printMatrix(int *matriz, int lines, int columns){
    for (int i = 0; i < lines; i++) {
        for (int j = 0; j < columns; j++) {
            if (*(matriz + i * columns + j) == 1) {
                printf("\u25A0 ");
            } else {
                printf("\u25A1 ");
            }
        }
        printf("\n");
    }
}

int countNeighbor(int *matriz, int line, int column, int matrizLines, int matrizColumns) {
    int acc = 0;

    // Verifica em cima e em baixo
    if (line + 1 < matrizLines) {
        acc += *(matriz + (line + 1) * matrizColumns + column);
    }
    if (line - 1 >= 0) {
        acc += *(matriz + (line - 1) * matrizColumns + column);
    }

    // Verifica esquerda e direita
    if (column + 1 < matrizColumns) {
        acc += *(matriz + line * matrizColumns + (column + 1));
    }
    if (column - 1 >= 0) {
        acc += *(matriz + line * matrizColumns + (column - 1));
    }

    // Verifica nas diagonais
    if (line + 1 < matrizLines && column + 1 < matrizColumns) {
        acc += *(matriz + (line + 1) * matrizColumns + (column + 1));
    }
    if (line - 1 >= 0 && column + 1 < matrizColumns) {
        acc += *(matriz + (line - 1) * matrizColumns + (column + 1));
    }
    if (line + 1 < matrizLines && column - 1 >= 0) {
        acc += *(matriz + (line + 1) * matrizColumns + (column - 1));
    }
    if (line - 1 >= 0 && column - 1 >= 0) {
        acc += *(matriz + (line - 1) * matrizColumns + (column - 1));
    }

    return acc;
}

int willSurvive(int neighbors){
  if (neighbors < 2)
    return 0;
  if (neighbors > 3)
    return 0;
  return 1;
}

void scanCells(int *matriz, int lines, int columns){
    for (int i = 0; i < lines; i++){
      for (int j = 0; j < columns; j++){
        int neighbors = countNeighbor(matriz, i, j, lines, columns);
        if (willSurvive(neighbors) != *(matriz + i * columns + j)){
          *(matriz + i * columns + j) = willSurvive(neighbors);
        }
      }
  }
}

int getAlivePeople(int *matriz, int lines, int columns){
  int acc = 0;
  for (int i = 0; i < lines; i++){
    for (int j = 0; j < columns; j++){
      acc += *(matriz + i * columns + j);
    }
  }
  return acc;
};

void showInfo(int iteracoes, int celulasVivas, int celulasMortas){
  printf("Iteracoes: %d\n", iteracoes);
  printf("Live cells: %d\n", celulasVivas);
  printf("Dead cells %d\n", celulasMortas);
}

void showLife(Parameters p){
  int matriz [p.matrizLines][p.matrizColumns];
  iniciateMatrix(&matriz[0][0], p.matrizLines, p.matrizColumns, p.lifeProbInInicialization);

  for (int c = 0; c < p.iteracoes; c++){
    printMatrix(&matriz[0][0], p.matrizLines, p.matrizColumns);
    if (p.showInfo){
      int liveCells = getAlivePeople(&matriz[0][0], p.matrizLines, p.matrizColumns);
      int deadCells = p.matrizColumns * p.matrizColumns - liveCells;
      showInfo(c, liveCells, deadCells);
    }
    scanCells(&matriz[0][0], p.matrizLines, p.matrizColumns);
    usleep(p.taxaAtualizacaoSegundos * 1000000);
    cleanScreen();
  }
}