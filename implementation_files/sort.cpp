#include "../arraymodule.hpp"
#include <iostream>

using namespace std;

/// @brief sorting of array in descending order
/// @param array source array
/// @param size size of array
void sort(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1; j++) {
            if (array[j] > array[j + 1]) {
                swap(array[j], array[j + 1]);
            }
        }
    }
}

/// @brief sorting of array in descending order
/// @param array source array
/// @param size size of array
void sort(long long array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1; j++) {
            if (array[j] > array[j + 1]) {
                swap(array[j], array[j + 1]);
            }
        }
    }
}

/// @brief sorting of array in descending order
/// @param array source array
/// @param size size of array
void sort(float array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1; j++) {
            if (array[j] > array[j + 1]) {
                swap(array[j], array[j + 1]);
            }
        }
    }
}

/// @brief sorting of array in descending order
/// @param array source array
/// @param size size of array
void sort(double array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1; j++) {
            if (array[j] > array[j + 1]) {
                swap(array[j], array[j + 1]);
            }
        }
    }
}

/// @brief sorting of array in descending order
/// @param array source array
/// @param size size of array
void sort(int array[], long long size) {
    for (long long i = 0; i < size - 1; i++) {
        for (long long j = 0; j < size - 1; j++) {
            if (array[j] > array[j + 1]) {
                swap(array[j], array[j + 1]);
            }
        }
    }
}

/// @brief sorting of array in descending order
/// @param array source array
/// @param size size of array
void sort(long long array[], long long size) {
    for (long long i = 0; i < size - 1; i++) {
        for (long long j = 0; j < size - 1; j++) {
            if (array[j] > array[j + 1]) {
                swap(array[j], array[j + 1]);
            }
        }
    }
}

/// @brief sorting of array in descending order
/// @param array source array
/// @param size size of array
void sort(float array[], long long size) {
    for (long long i = 0; i < size - 1; i++) {
        for (long long j = 0; j < size - 1; j++) {
            if (array[j] > array[j + 1]) {
                swap(array[j], array[j + 1]);
            }
        }
    }
}

/// @brief sorting of array in descending order
/// @param array source array
/// @param size size of array
void sort(double array[], long long size) {
    for (long long i = 0; i < size - 1; i++) {
        for (long long j = 0; j < size - 1; j++) {
            if (array[j] > array[j + 1]) {
                swap(array[j], array[j + 1]);
            }
        }
    }
}
