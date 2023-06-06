#include "../arraymodule.hpp"
#include <iostream>

using namespace std;

/// @brief copying one array to another if they are the same size
/// @param array_a source array_a
/// @param size size of arrays
/// @param array_b copy of source array_b
void copy(int array_a[], int size, int array_b[]) {
    for (int i = 0; i < size; i++) {
        array_b[i] = array_a[i];
    }
}

/// @brief copying one array to another if they are the same size
/// @param array_a source array_a
/// @param size size of arrays
/// @param array_b copy of source array_b
void copy(long long array_a[], int size, long long array_b[]) {
    for (int i = 0; i < size; i++) {
        array_b[i] = array_a[i];
    }
}

/// @brief copying one array to another if they are the same size
/// @param array_a source array_a
/// @param size size of arrays
/// @param array_b copy of source array_b
void copy(float array_a[], int size, float array_b[]) {
    for (int i = 0; i < size; i++) {
        array_b[i] = array_a[i];
    }
}

/// @brief copying one array to another if they are the same size
/// @param array_a source array_a
/// @param size size of arrays
/// @param array_b copy of source array_b
void copy(double array_a[], int size, double array_b[]) {
    for (int i = 0; i < size; i++) {
        array_b[i] = array_a[i];
    }
}

/// @brief copying one array to another if they are the same size
/// @param array_a source array_a
/// @param size size of arrays
/// @param array_b copy of source array_b
void copy(int array_a[], long long size, int array_b[]) {
    for (long long i = 0; i < size; i++) {
        array_b[i] = array_a[i];
    }
}

/// @brief copying one array to another if they are the same size
/// @param array_a source array_a
/// @param size size of arrays
/// @param array_b copy of source array_b
void copy(long long array_a[], long long size, long long array_b[]) {
    for (long long i = 0; i < size; i++) {
        array_b[i] = array_a[i];
    }
}

/// @brief copying one array to another if they are the same size
/// @param array_a source array_a
/// @param size size of arrays
/// @param array_b copy of source array_b
void copy(float array_a[], long long size, float array_b[]) {
    for (long long i = 0; i < size; i++) {
        array_b[i] = array_a[i];
    }
}

/// @brief copying one array to another if they are the same size
/// @param array_a source array_a
/// @param size size of arrays
/// @param array_b copy of source array_b
void copy(double array_a[], long long size, double array_b[]) {
    for (long long i = 0; i < size; i++) {
        array_b[i] = array_a[i];
    }
}
