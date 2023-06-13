#include "../arraymodule.hpp"
#include <iostream>

using namespace std;

/// @brief replacing element by its value and occurrence
/// @param array source array
/// @param size size of array
/// @param source_value value of replaced element
/// @param replaced_value source_value is replaced by replaced_value
/// @param occurrence occurrence of replaced element, by default 1
void replace_by_value(int array[], int size, int source_value, int replaced_value, int occurrence = 1) {
    int s = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] == source_value) {
            s++;
            if (occurrence == s) {
                array[i] = replaced_value;
                break;
            }
        }
    }
}

/// @brief replacing element by its value and occurrence
/// @param array source array
/// @param size size of array
/// @param source_value value of replaced element
/// @param replaced_value source_value is replaced by replaced_value
/// @param occurrence occurrence of replaced element, by default 1
void replace_by_value(long long array[], int size, long long source_value, long long replaced_value, int occurrence = 1) {
    int s = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] == source_value) {
            s++;
            if (occurrence == s) {
                array[i] = replaced_value;
                break;
            }
        }
    }
}

/// @brief replacing element by its value and occurrence
/// @param array source array
/// @param size size of array
/// @param source_value value of replaced element
/// @param replaced_value source_value is replaced by replaced_value
/// @param occurrence occurrence of replaced element, by default 1
void replace_by_value(float array[], int size, float source_value, float replaced_value, int occurrence = 1) {
    int s = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] == source_value) {
            s++;
            if (occurrence == s) {
                array[i] = replaced_value;
                break;
            }
        }
    }
}

/// @brief replacing element by its value and occurrence
/// @param array source array
/// @param size size of array
/// @param source_value value of replaced element
/// @param replaced_value source_value is replaced by replaced_value
/// @param occurrence occurrence of replaced element, by default 1
void replace_by_value(double array[], int size, double source_value, double replaced_value, int occurrence = 1) {
    int s = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] == source_value) {
            s++;
            if (occurrence == s) {
                array[i] = replaced_value;
                break;
            }
        }
    }
}

/// @brief replacing element by its value and occurrence
/// @param array source array
/// @param size size of array
/// @param source_value value of replaced element
/// @param replaced_value source_value is replaced by replaced_value
/// @param occurrence occurrence of replaced element, by default 1
void replace_by_value(int array[], long long size, int source_value, int replaced_value, long long occurrence = 1) {
    long long s = 0;
    for (long long i = 0; i < size; i++) {
        if (array[i] == source_value) {
            s++;
            if (occurrence == s) {
                array[i] = replaced_value;
                break;
            }
        }
    }
}

/// @brief replacing element by its value and occurrence
/// @param array source array
/// @param size size of array
/// @param source_value value of replaced element
/// @param replaced_value source_value is replaced by replaced_value
/// @param occurrence occurrence of replaced element, by default 1
void replace_by_value(long long array[], long long size, long long source_value, long long replaced_value, long long occurrence = 1) {
    long long s = 0;
    for (long long i = 0; i < size; i++) {
        if (array[i] == source_value) {
            s++;
            if (occurrence == s) {
                array[i] = replaced_value;
                break;
            }
        }
    }
}

/// @brief replacing element by its value and occurrence
/// @param array source array
/// @param size size of array
/// @param source_value value of replaced element
/// @param replaced_value source_value is replaced by replaced_value
/// @param occurrence occurrence of replaced element, by default 1
void replace_by_value(float array[], long long size, float source_value, float replaced_value, long long occurrence = 1) {
    long long s = 0;
    for (long long i = 0; i < size; i++) {
        if (array[i] == source_value) {
            s++;
            if (occurrence == s) {
                array[i] = replaced_value;
                break;
            }
        }
    }
}

/// @brief replacing element by its value and occurrence
/// @param array source array
/// @param size size of array
/// @param source_value value of replaced element
/// @param replaced_value source_value is replaced by replaced_value
/// @param occurrence occurrence of replaced element, by default 1
void replace_by_value(double array[], long long size, double source_value, double replaced_value, long long occurrence = 1) {
    long long s = 0;
    for (long long i = 0; i < size; i++) {
        if (array[i] == source_value) {
            s++;
            if (occurrence == s) {
                array[i] = replaced_value;
                break;
            }
        }
    }
}
