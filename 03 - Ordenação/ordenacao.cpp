#include "ordenacao.h"

#include <cmath>
#include <iostream>

using namespace std;

void insercaoDireta(int vetor[], int tamanho) {
  int i, j;  // contadores
  int chave;
  for (j = 1; j < tamanho; j++) {
    chave = vetor[j];
    i = j - 1;
    while ((i >= 0) && (vetor[i] < chave)) {  // decrescent order
      vetor[i + 1] = vetor[i];
      i = i - 1;
    }
    vetor[i + 1] = chave;
  }
}

void bubbleSort(int vetor[], int tamanho) {
  int i, j;  // contadores
  int trab;
  bool troca;
  int limite;
  troca = true;
  limite = tamanho - 1;

  int troca_count = 0;  // Counter for number of swaps

  while (troca) {
    troca = false;
    for (i = 0; i < limite; i++)
      if (vetor[i] > vetor[i + 1]) {
        trab = vetor[i];
        cout << "New trab:" << trab << endl;  // Print the new trab value
        vetor[i] = vetor[i + 1];
        vetor[i + 1] = trab;
        j = i;
        troca = true;
        troca_count++;
      }
    limite = j;
  }

  cout << "Contador:" << troca_count << endl;  // Print the total number of swaps
}

void quickSort(int vetor[], int i, int j) {
  int trab, esq, dir, pivo;
  esq = i;
  dir = j;
  pivo = vetor[(int)round((esq + dir) / 2.0)];
  do {
    while (vetor[esq] < pivo) esq++;
    while (vetor[dir] > pivo) dir--;
    if (esq <= dir) {
      trab = vetor[esq];
      vetor[esq] = vetor[dir];
      vetor[dir] = trab;
      esq++;
      dir--;
    }
  } while (esq <= dir);
  if (dir - i >= 0) quickSort(vetor, i, dir);
  if (j - esq >= 0) quickSort(vetor, esq, j);
}