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
#include <assert.h>
#include <stdio.h>
#include "../src/vida.h"

#define MATRIZ_SIZE 3

void testIniciateMatriz() {
    int matriz[MATRIZ_SIZE][MATRIZ_SIZE];
    iniciateMatrix(&matriz[0][0], MATRIZ_SIZE);

    for (int i = 0; i < MATRIZ_SIZE; i++) {
        for (int j = 0; j < MATRIZ_SIZE; j++) {
            assert(matriz[i][j] >= 0 && matriz[i][j] <= 1);
        }
    }
}

void testCountNeighbor() {
    int matriz[MATRIZ_SIZE][MATRIZ_SIZE] = {
        {1, 0, 1},
        {0, 1, 0},
        {1, 0, 1}
    };

    assert(countNeighbor(&matriz[0][0], 0, 0, MATRIZ_SIZE) == 1);
    assert(countNeighbor(&matriz[0][0], 0, 1, MATRIZ_SIZE) == 3);
    assert(countNeighbor(&matriz[0][0], 0, 2, MATRIZ_SIZE) == 1);
    assert(countNeighbor(&matriz[0][0], 1, 0, MATRIZ_SIZE) == 3);
    assert(countNeighbor(&matriz[0][0], 1, 1, MATRIZ_SIZE) == 4);
    assert(countNeighbor(&matriz[0][0], 1, 2, MATRIZ_SIZE) == 3);
    assert(countNeighbor(&matriz[0][0], 2, 0, MATRIZ_SIZE) == 1);
    assert(countNeighbor(&matriz[0][0], 2, 1, MATRIZ_SIZE) == 3);
    assert(countNeighbor(&matriz[0][0], 2, 2, MATRIZ_SIZE) == 1);
}

void testWillSurvive() {
    assert(willSurvive(1) == 0);
    assert(willSurvive(2) == 1);
    assert(willSurvive(3) == 1);
    assert(willSurvive(4) == 0);
}

void testScanCells() {
    int matriz[MATRIZ_SIZE][MATRIZ_SIZE] = {
        {1, 0, 1},
        {0, 1, 0},
        {1, 0, 1}
    };

    scanCells(&matriz[0][0], MATRIZ_SIZE);

    assert(matriz[0][0] == 0);
    assert(matriz[0][1] == 1);
    assert(matriz[0][2] == 1);
    assert(matriz[1][0] == 1);
    assert(matriz[1][1] == 0);
    assert(matriz[1][2] == 1);
    assert(matriz[2][0] == 0);
    assert(matriz[2][1] == 1);
    assert(matriz[2][2] == 1);
}

void testGetAlivePeople() {
    int matriz[MATRIZ_SIZE][MATRIZ_SIZE] = {
        {1, 0, 1},
        {0, 1, 0},
        {1, 0, 1}
    };

    assert(getAlivePeople(&matriz[0][0], MATRIZ_SIZE) == 5);
}

int main() {
  testIniciateMatriz();
  testCountNeighbor();
  testWillSurvive();
  testScanCells();
  testGetAlivePeople();
  printf("All tests passed!\n");
  return 0;
}
