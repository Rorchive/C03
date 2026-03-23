/**
 * @file: HASH-hash_aux.cpp
 * @author: Rodrigo Andrade
 * @date: 17 Oct 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/Rorchive/C03
 */

#include <iostream>

#include "hashing.h"


using namespace std;

int main() {
  int key, length;     // Parameters for the array search
  int positions[100];  // Array for store search results

  int count = 0;

  // Calculate the position of the element and put in 'positions'
  while ((cin >> key >> length) && (key != 0 && length != 0)) {
    positions[count] = hash_aux(key, length);
    count++;
  }

  // Show query results
  for (int i = 0; i < count; i++) cout << positions[i] << endl;

  return 0;
}