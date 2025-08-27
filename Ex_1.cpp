/**
 * @file: Ex_1.cpp
 * @author: Rodrigo Andrade
 * @date: 21 Aug 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/RodrigoCAndrade/C03
 */


#include <iostream>

using namespace std;

/**
 * @brief: Searches for a number in an array.
 * @return: The index of the found number or -1 if not found.
 */
int searchNumber(int numbers[], int size, int query) {
    for (int i = 0; i < size; i++)
        if (numbers[i] == query)
            return i;

    return -1;
}

int main() {
    int numbers[100]; // List of numbers
    int number; // Aux for input

    int count = 0; // Count of valid numbers

    // Store numbers in the array
    while(cin >> number && number != -1) {
        numbers[count] = number;
        count++;
    }

    // Search
    int size = count;
    
    int query; // Number to search
    cin >> query;

    // Search for the number
    int index = searchNumber(numbers, size, query);

    // Output the result
    if (index != -1) {
        cout << index << endl;
    } else
        cout << "Não encontrado" << endl;

    return 0;
}