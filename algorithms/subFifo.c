#include <stdio.h>

/*printando um array*/
void printArr(int *arr, int size) {
  printf("[");
  for (int c = 0; c < size; c++) {
    printf("%d ", arr[c]);
  }
  printf("\b]\n");
}

/*verificando se uma pagina esta carregada no frame*/
int inMemory(int page, int *frames, int size) {
  for (int c = 0; c < size; c++) {
    if (frames[c] == page)
      return 1;
  }
  return 0;
}

/*
  funcao que insere uma pagina no frame se ela não estiver no frame atual;
  retorna 0 se a pagina ja estiver no frame ou 1 caso a pagina não esteja no
  frame (falha de pagina);
*/
int putIn(int page, int *frames, int size) {
  if (inMemory(page, frames, size))
    return 0;

  int c = 1;
  for (c = 0; c < size - 1; c++) {
    frames[c] = frames[c + 1];
  }
  frames[c] = page;
  return 1;
}

/*
  funcao que atualiza o estado do frame e move o index atual em relação as
  paginas; retorna 0 ou 1 indicando falha de pagina;
*/
int loopOver(int *pages, int psize, int *frames, int fsize, int *currentIndex) {
  *currentIndex = *currentIndex + 1;
  return putIn(pages[*currentIndex - 1], frames, fsize);
}

/*
  funcao que percorre todas as paginas atualizando o frame e mostra os
  resultados; recebe o array de paginas, seu tamanho e o tamanho do frame;
*/
void simulatePagesRequest(int *pages, int psize, int fsize) {
  // inicializa o frame com todos os valores = -1 (indicando posicao vazia)
  int frames[fsize];
  for (int c = 0; c < fsize; c++)
    frames[c] = -1;

  int currentIndex = 0;
  int falhas = 0;

  while (currentIndex < psize) {
    falhas += loopOver(pages, psize, frames, fsize, &currentIndex);
  }

  printf("Total de falhas da pagina: %d\n", falhas);
  printf("Estado final na memoria: ");
  printArr(frames, fsize);
}

// levando em consideração que o index 0 é o ultima posição na fila;
int main(void) {

  printf("Entrada 01: \n");
  int pages1[] = {1, 3, 0, 3, 5, 6, 3, 1, 6, 1, 2};
  int psize1 = sizeof(pages1) / sizeof(int);
  int fsize1 = 3;
  simulatePagesRequest(pages1, psize1, fsize1);

  printf("Entrada 02: \n");
  int pages2[] = {5, 6, 7, 8, 5, 6, 8, 9, 7, 6};
  int psize2 = sizeof(pages2) / sizeof(int);
  int fsize2 = 4;
  simulatePagesRequest(pages2, psize2, fsize2);

  printf("Entrada 03: \n");
  int pages3[] = {0, 2, 1, 6, 4, 0, 1, 0, 2, 1, 4};
  int psize3 = sizeof(pages3) / sizeof(int);
  int fsize3 = 3;
  simulatePagesRequest(pages3, psize3, fsize3);

  printf("Entrada 04: \n");
  int pages4[] = {9, 3, 4, 2, 5, 6, 4, 9, 7, 1, 3};
  int psize4 = sizeof(pages4) / sizeof(int);
  int fsize4 = 4;
  simulatePagesRequest(pages4, psize4, fsize4);

  printf("Entrada 05: \n");
  int pages5[] = {0, 2, 1, 6, 4, 0, 1, 0, 2, 1, 4};
  int psize5 = sizeof(pages5) / sizeof(int);
  int fsize5 = 3;
  simulatePagesRequest(pages5, psize5, fsize5);

  printf("Entrada 06: \n");
  int pages6[] = {8, 5, 7, 5, 4, 6, 8, 6, 1, 4, 8, 7};
  int psize6 = sizeof(pages6) / sizeof(int);
  int fsize6 = 2;
  simulatePagesRequest(pages6, psize6, fsize6);

  return 1;
}
