/**
 * @file: PESQ-Sequencial.cpp
 * @author: Rodrigo Andrade
 * @date: 03 Sep 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/Rorchive/C03
 */

#include <iostream>

#include "busca.h"

using namespace std;

int main() {
  int numbers[100];  // List of numbers
  int number;        // Aux for input

  int count = 0;  // Count of valid numbers

  // Store numbers in the array
  while (cin >> number && number != -1) {
    numbers[count] = number;
    count++;
  }

  // Search algorithm
  int size = count;

  int query;  // Number to search
  cin >> query;

  // Search for the number
  int index = sequencial(numbers, size, query);

  // Output the result
  if (index != -1) {
    cout << query << " encontrado na posicao " << index << endl;
  } else
    cout << query << " nao encontrado" << endl;

  return 0;
}