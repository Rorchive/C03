/**
 * @file: ordenacao.h
 * @author: Rodrigo Andrade
 * @date: 11 Sep 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/Rorchive/C03
 */

#ifndef ORDENACAO_H
#define ORDENACAO_H

#include <string>

using namespace std;

struct dados {
  string nome;
  string curso;
  int matricula;
};

// --- ORIGINAL ALGORITHMS ---

void insercaoDireta(int vetor[], int tamanho);

void bubbleSort(int vetor[], int tamanho);

void quickSort(int vetor[], int i, int j);

// --- MODIFIED ALGORITHMS ---

/**
 * @exercise: ORD-Insertion_Sort.cpp
 * @brief: Function to perform insertion sort in descending order
 */
void insercaoDiretaDesceding(int vetor[], int tamanho);

/**
 * @exercise: ORD-Mostrando_e_contando.cpp
 * @brief: Function to perform bubble sort and count the number of swaps
 */
void bubbleSortCounter(int vetor[], int tamanho);

/**
 * @exercise: ORD-Ordene_um_vetor.cpp
 * @brief: Function to perform quicksort in growing order of float numbers
 */
void quickSortFloat(float vector[], int i, int j);

/**
 * @exercise: ORD-CRA.cpp
 * @brief: Function to perform quicksort in growing order of a struct by name
 */
void quickSortStruct(dados vetor[], int i, int j);

#endif