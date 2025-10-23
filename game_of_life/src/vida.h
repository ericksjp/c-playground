#ifndef VIDA_H
#define VIDA_H

typedef struct{
  int matrizLines;
  int matrizColumns;
  int lifeProbInInicialization;
  float taxaAtualizacaoSegundos;
  int showInfo;
  int iteracoes;
} Parameters;

/* Função para limpar a tela*/
void cleanScreen();

/* Função para iniciar a matriz com valores aleatórios no intervalo 0-1*/
void iniciateMatrix(int *matriz, int lines, int columns, int testParameter);

/* Função para imprimir a matriz*/
void printMatrix(int *matriz, int lines, int columns);
void printMatrixWithBlocks(int *matriz, int lines, int columns);

/* Função para contar o número de vizinhos vivos de uma célula*/
int countNeighbor(int *matriz, int line, int column, int matrizLines, int matrizColumns);

/* Função para verificar se uma célula sobreviverá ou não*/
int updateState(int cellState, int neighbors);

/* Função para verificar o estado das células e atualizar a matriz*/
void scanCells(int *matriz, int lines, int columns);

/* Função para contar o número de celunas vivas na Matriz*/
int getAlivePeople(int *matriz, int lines, int columns);

void transferirMatriz(int *matriz, int *matrizAux, int lines, int columns);

/* Inicia o struct parameters com valores padrões */
Parameters inicializaParameters(Parameters p);

void showLife(Parameters p);

#endif