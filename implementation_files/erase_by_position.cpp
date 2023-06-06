#include "../arraymodule.hpp"
#include <iostream>

using namespace std;

/// @brief removing element by its index
/// @param array source array
/// @param size size of array
/// @param position index of removed element
void erase_by_position(int array[], int& size, int position) {
    size--;
    for (int i = position; i < size; i++) {
        array[i] = array[i + 1];
    }
}

/// @brief removing element by its index
/// @param array source array
/// @param size size of array
/// @param position index of removed element
void erase_by_position(long long array[], int& size, int position) {
    size--;
    for (int i = position; i < size; i++) {
        array[i] = array[i + 1];
    }
}

/// @brief removing element by its index
/// @param array source array
/// @param size size of array
/// @param position index of removed element
void erase_by_position(float array[], int& size, int position) {
    size--;
    for (int i = position; i < size; i++) {
        array[i] = array[i + 1];
    }
}

/// @brief removing element by its index
/// @param array source array
/// @param size size of array
/// @param position index of removed element
void erase_by_position(double array[], int& size, int position) {
    size--;
    for (int i = position; i < size; i++) {
        array[i] = array[i + 1];
    }
}

/// @brief removing element by its index
/// @param array source array
/// @param size size of array
/// @param position index of removed element
void erase_by_position(int array[], long long& size, long long position) {
    size -= 1;
    for (long long i = position; i < size; i++) {
        array[i] = array[i + 1];
    }
}

/// @brief removing element by its index
/// @param array source array
/// @param size size of array
/// @param position index of removed element
void erase_by_position(long long array[], long long& size, long long position) {
    size--;
    for (long long i = position; i < size; i++) {
        array[i] = array[i + 1];
    }
}

/// @brief removing element by its index
/// @param array source array
/// @param size size of array
/// @param position index of removed element
void erase_by_position(float array[], long long& size, long long position) {
    size--;
    for (long long i = position; i < size; i++) {
        array[i] = array[i + 1];
    }
}

/// @brief removing element by its index
/// @param array source array
/// @param size size of array
/// @param position index of removed element
void erase_by_position(double array[], long long& size, long long position) {
    size--;
    for (long long i = position; i < size; i++) {
        array[i] = array[i + 1];
    }
}
