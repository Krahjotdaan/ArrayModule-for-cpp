#include "../arraymodule.hpp"
#include <iostream>

using namespace std;

/// @brief replace element of array by its position
/// @param array source array
/// @param size size of array
/// @param position index of replaced element
/// @param replaced_value element with given index is replaced by replaced_value
void replace_by_position(int array[], int size, int position, int replaced_value) {
    for (int i = 0; i < size; i++) {
        if (position == i) {
            array[i] = replaced_value;
            break;
        }
    }
}

/// @brief replace element of array by its position
/// @param array source array
/// @param size size of array
/// @param position index of replaced element
/// @param replaced_value element with given index is replaced by replaced_value
void replace_by_position(long long array[], int size, int position, long long replaced_value) {
    for (int i = 0; i < size; i++) {
        if (position == i) {
            array[i] = replaced_value;
            break;
        }
    }
}

/// @brief replace element of array by its position
/// @param array source array
/// @param size size of array
/// @param position index of replaced element
/// @param replaced_value element with given index is replaced by replaced_value
void replace_by_position(float array[], int size, int position, float replaced_value) {
    for (int i = 0; i < size; i++) {
        if (position == i) {
            array[i] = replaced_value;
            break;
        }
    }
}

/// @brief replace element of array by its position
/// @param array source array
/// @param size size of array
/// @param position index of replaced element
/// @param replaced_value element with given index is replaced by replaced_value
void replace_by_position(double array[], int size, int position, double replaced_value) {
    for (int i = 0; i < size; i++) {
        if (position == i) {
            array[i] = replaced_value;
            break;
        }
    }
}

/// @brief replace element of array by its position
/// @param array source array
/// @param size size of array
/// @param position index of replaced element
/// @param replaced_value element with given index is replaced by replaced_value
void replace_by_position(int array[], long long size, long long position, int replaced_value) {
    for (long long i = 0; i < size; i++) {
        if (position == i) {
            array[i] = replaced_value;
            break;
        }
    }
}

/// @brief replace element of array by its position
/// @param array source array
/// @param size size of array
/// @param position index of replaced element
/// @param replaced_value element with given index is replaced by replaced_value
void replace_by_position(long long array[], long long size, long long position, long long replaced_value) {
    for (long long i = 0; i < size; i++) {
        if (position == i) {
            array[i] = replaced_value;
            break;
        }
    }
}

/// @brief replace element of array by its position
/// @param array source array
/// @param size size of array
/// @param position index of replaced element
/// @param replaced_value element with given index is replaced by replaced_value
void replace_by_position(float array[], long long size, long long position, float replaced_value) {
    for (long long i = 0; i < size; i++) {
        if (position == i) {
            array[i] = replaced_value;
            break;
        }
    }
}

/// @brief replace element of array by its position
/// @param array source array
/// @param size size of array
/// @param position index of replaced element
/// @param replaced_value element with given index is replaced by replaced_value
void replace_by_position(double array[], long long size, long long position, double replaced_value) {
    for (long long i = 0; i < size; i++) {
        if (position == i) {
            array[i] = replaced_value;
            break;
        }
    }
}
