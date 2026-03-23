#include "hashing.h"

#include "hashing.h"

/**
 * @brief: Function to calculate the position of an element in the array by hash.
 * @params: int k: hash, int m: array length
*/
int hash_aux(int k, int m) {
    int r = k % m;
    
    return (r < 0) ? (r+m) : r;
}

/**
 * @brief: Function to calculate the position of an element with collision avoidance.
 * @params: int k: hash, int m: array length, int i: collision count.
 */
int hash1(int k, int i, int m) {
    return (hash_aux(k, m) + i) % m;
}