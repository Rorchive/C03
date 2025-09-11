/**
 * @file: ORD-Insertion_Sort.cpp
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
  int numbers[1000];
  int number;

  int count = 0;

  while (cin >> number && number != 0) {
    numbers[count] = number;
    count++;
  }

  insercaoDiretaDesceding(numbers, count);

  for (int i = 0; i < count; i++) cout << numbers[i] << " ";

  return 0;
}