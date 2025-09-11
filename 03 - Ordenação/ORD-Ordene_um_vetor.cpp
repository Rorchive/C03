/**
 * @file: ORD-Ordene_um_vetor.cpp
 * @author: Rodrigo Andrade
 * @date: 10 Sep 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/Rorchive/C03
 */

#include <iomanip>
#include <iostream>

#include "ordenacao.h"

using namespace std;

int main() {
  float numbers[1000];  // Array for storing the numbers
  float number;         // Aux for getting the numbers

  int counter = 0;  // Array counter

  // Inserting in the array
  while (cin >> number && number != -1) {
    numbers[counter] = number;
    counter++;
  }

  // Display the ordered array
  int arraySize = counter;

  quickSortFloat(numbers, 0, (arraySize - 1));

  for (int i = 0; i < arraySize; i++) cout << fixed << setprecision(1) << numbers[i] << " ";

  return 0;
}