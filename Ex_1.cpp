#include <iostream>

using namespace std;

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

    int index = -1; // Index of the found number

    // Search for the number
    for (int i = 0; i < size; i++) {
        if (numbers[i] == query) {
            index = i;
            break;
        }
    }

    // Output the result
    if (index != -1) {
        cout << index << endl;
    } else
        cout << "Não encontrado" << endl;

    return 0;
}