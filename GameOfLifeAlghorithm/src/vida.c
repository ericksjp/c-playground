#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

void iniciateMatrix(int *matriz, int matrizSize){
    srand(time(NULL));
    for (int i = 0; i < matrizSize; i++) {
        for (int j = 0; j < matrizSize; j++) {
            *(matriz + i * matrizSize + j) = rand() % 2;
        }
    }
}


void printMatrix(int *matriz, int matrizSize){
    for (int i = 0; i < matrizSize; i++) {
        for (int j = 0; j < matrizSize; j++) {
            printf("%d", *(matriz + i * matrizSize + j));
        }
        printf("\n");
    }
}

int countNeighbor(int *matriz, int line, int column, int matrizSize) {
    int acc = 0;

    // Verifica em cima e em baixo
    if (line + 1 < matrizSize) {
        acc += *(matriz + (line + 1) * matrizSize + column);
    }
    if (line - 1 >= 0) {
        acc += *(matriz + (line - 1) * matrizSize + column);
    }

    // Verifica esquerda e direita
    if (column + 1 < matrizSize) {
        acc += *(matriz + line * matrizSize + (column + 1));
    }
    if (column - 1 >= 0) {
        acc += *(matriz + line * matrizSize + (column - 1));
    }

    // Verifica nas diagonais
    if (line + 1 < matrizSize && column + 1 < matrizSize) {
        acc += *(matriz + (line + 1) * matrizSize + (column + 1));
    }
    if (line - 1 >= 0 && column + 1 < matrizSize) {
        acc += *(matriz + (line - 1) * matrizSize + (column + 1));
    }
    if (line + 1 < matrizSize && column - 1 >= 0) {
        acc += *(matriz + (line + 1) * matrizSize + (column - 1));
    }
    if (line - 1 >= 0 && column - 1 >= 0) {
        acc += *(matriz + (line - 1) * matrizSize + (column - 1));
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

void scanCells(int *matriz, int matrizSize){
    for (int i = 0; i < matrizSize; i++){
      for (int j = 0; j < matrizSize; j++){
        int neighbors = countNeighbor(matriz, i, j, matrizSize);
        if (willSurvive(neighbors) != *(matriz + i * matrizSize + j)){
          *(matriz + i * matrizSize + j) = willSurvive(neighbors);
        }
      }
  }
}

int getAlivePeople(int *matriz, int matrizSize){
  int acc = 0;
  for (int i = 0; i < matrizSize; i++){
    for (int j = 0; j < matrizSize; j++){
      acc += *(matriz + i * matrizSize + j);
    }
  }
  return acc;
};