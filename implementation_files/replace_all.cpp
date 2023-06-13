#include "../arraymodule.hpp"
#include <iostream>

using namespace std;

/// @brief replacing all elements of array with given value by replaced_value
/// @param array source array
/// @param size size of array
/// @param source_value value of replaced element
/// @param replaced_value source_value is replaced by replaced_value
void replace_all(int array[], int size, int source_value, int replaced_value) {
    for (int i = 0; i < size; i++) {
        if (array[i] == source_value) {
            array[i] = replaced_value;
        }
    }
}

/// @brief replacing all elements of array with given value by replaced_value
/// @param array source array
/// @param size size of array
/// @param source_value value of replaced element
/// @param replaced_value source_value is replaced by replaced_value
void replace_all(long long array[], int size, long long  source_value, long long  replaced_value) {
    for (int i = 0; i < size; i++) {
        if (array[i] == source_value) {
            array[i] = replaced_value;
        }
    }
}

/// @brief replacing all elements of array with given value by replaced_value
/// @param array source array
/// @param size size of array
/// @param source_value value of replaced element
/// @param replaced_value source_value is replaced by replaced_value
void replace_all(float array[], int size, float source_value, float replaced_value) {
    for (int i = 0; i < size; i++) {
        if (array[i] == source_value) {
            array[i] = replaced_value;
        }
    }
}

/// @brief replacing all elements of array with given value by replaced_value
/// @param array source array
/// @param size size of array
/// @param source_value value of replaced element
/// @param replaced_value source_value is replaced by replaced_value
void replace_all(double array[], int size, double source_value, double replaced_value) {
    for (int i = 0; i < size; i++) {
        if (array[i] == source_value) {
            array[i] = replaced_value;
        }
    }
}

/// @brief replacing all elements of array with given value by replaced_value
/// @param array source array
/// @param size size of array
/// @param source_value value of replaced element
/// @param replaced_value source_value is replaced by replaced_value
void replace_all(int array[], long long size, int source_value, int replaced_value) {
    for (long long i = 0; i < size; i++) {
        if (array[i] == source_value) {
            array[i] = replaced_value;
        }
    }
}

/// @brief replacing all elements of array with given value by replaced_value
/// @param array source array
/// @param size size of array
/// @param source_value value of replaced element
/// @param replaced_value source_value is replaced by replaced_value
void replace_all(long long array[], long long size, long long  source_value, long long  replaced_value) {
    for (long long i = 0; i < size; i++) {
        if (array[i] == source_value) {
            array[i] = replaced_value;
        }
    }
}

/// @brief replacing all elements of array with given value by replaced_value
/// @param array source array
/// @param size size of array
/// @param source_value value of replaced element
/// @param replaced_value source_value is replaced by replaced_value
void replace_all(float array[], long long size, float source_value, float replaced_value) {
    for (long long i = 0; i < size; i++) {
        if (array[i] == source_value) {
            array[i] = replaced_value;
        }
    }
}

/// @brief replacing all elements of array with given value by replaced_value
/// @param array source array
/// @param size size of array
/// @param source_value value of replaced element
/// @param replaced_value source_value is replaced by replaced_value
void replace_all(double array[], long long size, double source_value, double replaced_value) {
    for (long long i = 0; i < size; i++) {
        if (array[i] == source_value) {
            array[i] = replaced_value;
        }
    }
}
