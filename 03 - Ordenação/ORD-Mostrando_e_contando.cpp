/**
 * @file: ORD-Mostrando_e_contando.cpp
 * @author: Rodrigo Andrade
 * @date: 03 Sep 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/Rorchive/C03
 */

#include <iostream>

#include "ordenacao.h"

using namespace std;

int main() {
  int N;
  cin >> N;

  int numbers[1000];

  for (int i = 0; i < N; i++) cin >> numbers[i];

  bubbleSortCounter(numbers, N);

  return 0;
}