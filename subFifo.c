#include <stdio.h>

int naMemoria(int pagina, int frames[], int tamanhaFrame) {
  for (int i = 0; i < tamanhaFrame; i++) {
    if (frames[i] == pagina) {
      return 1;
    }
  }
  return 0;
}

int main() {
  int paginas[] = {1, 2, 3, 4, 1, 2, 5, 1, 2, 3, 4, 5};
  int num_pages = sizeof(paginas) / sizeof(paginas[0]);
  int tamanhoFrames = 3;

  // preenchendo os frames com -1
  int frames[tamanhoFrames];
  for (int i = 0; i < tamanhoFrames; i++)
    frames[i] = -1;

  int falhas = 0;
  int proximo_index = 0;

  for (int i = 0; i < num_pages; i++) {
    int paginaAtual = paginas[i];

    if (!naMemoria(paginaAtual, frames, tamanhoFrames)) {
      falhas++;

      frames[proximo_index] = paginaAtual;
      proximo_index = (proximo_index + 1) % tamanhoFrames;
    }
  }

  printf("Total de falhas de página: %d\n", falhas);
  printf("Estado final da memória: ");
  for (int c = 0; c < tamanhoFrames; c++)
    printf("%d ", frames[c]);
  printf("\n");
  return 0;
}
