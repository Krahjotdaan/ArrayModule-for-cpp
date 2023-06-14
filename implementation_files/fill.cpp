#include "../arraymodule.hpp"
#include <iostream>

using namespace std;

/// @brief filling array with specific value
/// @param array source array
/// @param size size of array
/// @param item value that will fill array, by default 0
void fill(int array[], int size, int item) {
    for (int i = 0; i < size; i++) {
        array[i] = item;
    }
}

/// @brief filling array with specific value
/// @param array source array
/// @param size size of array
/// @param item value that will fill array, by default 0
void fill(long long array[], int size, long long item) {
    for (int i = 0; i < size; i++) {
        array[i] = item;
    }
}

/// @brief filling array with specific value
/// @param array source array
/// @param size size of array
/// @param item value that will fill array, by default 0
void fill(float array[], int size, float item) {
    for (int i = 0; i < size; i++) {
        array[i] = item;
    }
}

/// @brief filling array with specific value
/// @param array source array
/// @param size size of array
/// @param item value that will fill array, by default 0
void fill(double array[], int size, double item) {
    for (int i = 0; i < size; i++) {
        array[i] = item;
    }
}

/// @brief filling array with specific value
/// @param array source array
/// @param size size of array
/// @param item value that will fill array, by default 0
void fill(int array[], long long size, int item) {
    for (long long i = 0; i < size; i++) {
        array[i] = item;
    }
}

/// @brief filling array with specific value
/// @param array source array
/// @param size size of array
/// @param item value that will fill array, by default 0
void fill(long long array[], long long size, long long item) {
    for (long long i = 0; i < size; i++) {
        array[i] = item;
    }
}

/// @brief filling array with specific value
/// @param array source array
/// @param size size of array
/// @param item value that will fill array, by default 0
void fill(float array[], long long size, float item) {
    for (long long i = 0; i < size; i++) {
        array[i] = item;
    }
}

/// @brief filling array with specific value
/// @param array source array
/// @param size size of array
/// @param item value that will fill array, by default 0
void fill(double array[], long long size, double item) {
    for (long long i = 0; i < size; i++) {
        array[i] = item;
    }
}
