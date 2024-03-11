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
  p.taxaAtualizacaoSegundos = 1.0;
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

void printMatrixWithBlocks(int *matriz, int lines, int columns){
    for (int i = 0; i < lines; i++) {
        for (int j = 0; j < columns; j++) {
            if (*(matriz + i * columns + j) == 1) {
                printf("\u2593");
            } else {
                printf("\u2591");
            }
        }
        printf("\n");
    }
}

int countNeighbor(int *matriz, int line, int column, int matrizLines, int matrizColumns) {
    int acc = 0;
    for (int i = -1; i <= 1; i++){
      for (int j = -1; j <=1; j++){
        if (line + i >= 0 && line + i < matrizLines && column + j >= 0 && column + j < matrizColumns && !(i == 0 && j == 0))
            acc+=*(matriz + (line + i) * matrizColumns + (column + j));
      }
    }
    return acc;
}


int updateState(int cellState, int neighbors){
  if (cellState == 0){
    return neighbors == 3 ? 1 : 0;
  }

  if (neighbors < 2)
    return 0;
  if (neighbors > 3)
    return 0;
  return 1;
}

void scanCells(int *matriz, int lines, int columns){
  int novaGeracao[lines][columns];
  transferirMatriz(&novaGeracao[0][0], (matriz + 0 * columns + 0), lines, columns);

  for (int i = 0; i < lines; i++){
    for (int j = 0; j < columns; j++){
      int cell = *(matriz + i * columns + j);
      int neighbors = countNeighbor(matriz, i, j, lines, columns);
      // printf("Cell [%d/%d]\nEstado: %d\nVizinhos: %d\nNovo estado: %d\n\n", i, j, cell, neighbors, updateState(cell, neighbors));
      if (updateState(cell, neighbors) != *(matriz + i * columns + j)){
        novaGeracao[i][j] = updateState(cell, neighbors);
      }
    }
  }

  transferirMatriz((matriz + 0 * columns + 0),&novaGeracao[0][0], lines, columns);
}

void transferirMatriz(int *matriz, int *matrizAux, int lines, int columns){
  for (int i = 0; i < lines; i++){
    for (int j = 0; j < columns; j++){
      *(matriz + i * columns + j) = *(matrizAux + i * columns + j);
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
    usleep((int)(p.taxaAtualizacaoSegundos * 1000000));
    cleanScreen();
  }
}
