/**
 * @file: HASH-Sondagem_linear.cpp
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
  int key, length;  // Parameters for the array search
  cin >> key >> length;

  // Displays the collision result for all the array
  for (int i = 0; i < length; i++) {
    cout << hash1(key, i, length) << " ";
  }

  return 0;
}