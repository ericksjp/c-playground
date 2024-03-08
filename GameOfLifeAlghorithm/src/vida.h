#ifndef VIDA_H
#define VIDA_H

/* Função para limpar a tela*/
void cleanScreen();

/* Função para iniciar a matriz com valores aleatórios no intervalo 0-1*/
void iniciateMatrix(int *matriz, int matrixSize);

/* Função para imprimir a matriz*/
void printMatrix(int *matriz, int matrixSize);

/* Função para contar o número de vizinhos vivos de uma célula*/
int countNeighbor(int *matriz, int line, int column, int matrizSize);

/* Função para verificar se uma célula sobreviverá ou não*/
int willSurvive(int neighbors);

/* Função para verificar o estado das células e atualizar a matriz*/
void scanCells(int *matriz, int matrizSize);

/* Função para contar o número de celunas vivas na Matriz*/
int getAlivePeople(int *matriz, int matrizSize);

#endif