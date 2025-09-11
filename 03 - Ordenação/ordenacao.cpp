/**
 * @file: ordenacao.cpp
 * @author: Rodrigo Andrade
 * @date: 11 Sep 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/Rorchive/C03
 */

#include "ordenacao.h"

#include <cmath>
#include <iostream>

// -- ORIGINAL ALGORITHMS --

void insercaoDireta(int vetor[], int tamanho) {
  int i, j;  // contadores
  int chave;
  for (j = 1; j < tamanho; j++) {
    chave = vetor[j];
    i = j - 1;
    while ((i >= 0) && (vetor[i] > chave)) {
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
  while (troca) {
    troca = false;
    for (i = 0; i < limite; i++)
      if (vetor[i] > vetor[i + 1]) {
        trab = vetor[i];
        vetor[i] = vetor[i + 1];
        vetor[i + 1] = trab;
        j = i;
        troca = true;
      }
    limite = j;
  }
}

// --- MODIFIED ALGORITHMS ---

void insercaoDiretaDesceding(int vetor[], int tamanho) {
  int i, j;  // contadores
  int chave;
  for (j = 1; j < tamanho; j++) {
    chave = vetor[j];
    i = j - 1;
    while ((i >= 0) && (vetor[i] < chave)) {  // descending order
      vetor[i + 1] = vetor[i];
      i = i - 1;
    }
    vetor[i + 1] = chave;
  }
}

void bubbleSortCounter(int vetor[], int tamanho) {
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

void quickSortFloat(float vetor[], int i, int j) {
  float trab, pivo;
  int esq, dir;
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
  if (dir - i >= 0) quickSortFloat(vetor, i, dir);
  if (j - esq >= 0) quickSortFloat(vetor, esq, j);
}

void quickSortStruct(dados vetor[], int i, int j) {
  dados trab;
  string pivo;
  int esq, dir;
  esq = i;
  dir = j;
  pivo = vetor[(int)round((esq + dir) / 2.0)].nome;
  do {
    while (vetor[esq].nome < pivo) esq++;
    while (vetor[dir].nome > pivo) dir--;
    if (esq <= dir) {
      trab = vetor[esq];
      vetor[esq] = vetor[dir];
      vetor[dir] = trab;
      esq++;
      dir--;
    }
  } while (esq <= dir);
  if (dir - i >= 0) quickSortStruct(vetor, i, dir);
  if (j - esq >= 0) quickSortStruct(vetor, esq, j);
}