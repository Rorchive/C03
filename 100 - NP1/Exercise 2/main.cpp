/**
 * @file: main.cpp
 * @author: Rodrigo Andrade
 * @date: 08 Out 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/Rorchive/C03
 */

#include <iomanip>
#include <iostream>

#include "ordenacao.h"

using namespace std;

int main() {
  float numbers[1000];  // Vetor para armazenar números reais

  // Auxiliares para preenchimento do vetor
  float number;
  int counter = 0;  // contador

  // Lógica de inserção no vetor
  while (cin >> number && number != -1) {
    numbers[counter] = number;
    counter++;
  }

  int numbers_length = counter;  // Tamanho do vetor

  insercaoDireta(numbers,
                 numbers_length);  // Ordenação do vetor em ordem decrescente

  // Exibição dos resultados com uma casa decimal
  for (int i = 0; i < numbers_length; i++)
    cout << fixed << setprecision(1) << numbers[i] << " ";

  return 0;
}