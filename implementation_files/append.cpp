#include "../arraymodule.hpp"
#include <iostream>

using namespace std;

/// @brief inserting element at the end of array
/// @param array mutable array
/// @param size size of array
/// @param item inserted element
void append(int array[], int& size, int item) {
    size++;
    array[size - 1] = item;
}

/// @brief inserting element at the end of array
/// @param array mutable array
/// @param size size of array
/// @param item inserted element
void append(long long array[], int& size, long long item) {
    size++;
    array[size - 1] = item;
}

/// @brief inserting element at the end of array
/// @param array mutable array
/// @param size size of array
/// @param item inserted element
void append(float array[], int& size, float item) {
    size++;
    array[size - 1] = item;
}

/// @brief inserting element at the end of array
/// @param array mutable array
/// @param size size of array
/// @param item inserted element
void append(double array[], int& size, double item) {
    size++;
    array[size - 1] = item;
}

/// @brief inserting element at the end of array
/// @param array mutable array
/// @param size size of array
/// @param item inserted element
void append(int array[], long long& size, int item) {
    size++;
    array[size - 1] = item;
}

/// @brief inserting element at the end of array
/// @param array source array
/// @param size size of array
/// @param item inserted element
void append(long long array[], long long& size, long long item) {
    size++;
    array[size - 1] = item;
}

/// @brief inserting element at the end of array
/// @param array source array
/// @param size size of array
/// @param item inserted element
void append(float array[], long long& size, float item) {
    size++;
    array[size - 1] = item;
}

/// @brief inserting element at the end of array
/// @param array source array
/// @param size size of array
/// @param item inserted element
void append(double array[], long long& size, double item) {
    size++;
    array[size - 1] = item;
}
