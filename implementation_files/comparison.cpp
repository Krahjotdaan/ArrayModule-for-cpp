#include "../arraymodule.hpp"
#include <iostream>

using namespace std;

/// @brief comparison of arrays
/// @param array_a source array_a
/// @param size_a size of array_a
/// @param array_b source array_b
/// @param size_b size of array_b
/// @return if every couples of arrays elements and sizes are equal, function will return true, else false
bool is_equal(int array_a[], int size_a, int array_b[], int size_b) {
    if (size_a == size_b) {
        for (int i = 0; i < size_a; i++) {
            if (array_a[i] != array_b[i]) {
                return false;
                break;
            }
        }
        return true;
    }
    else {
        return false;
    }
}

/// @brief comparison of arrays
/// @param array_a source array_a
/// @param size_a size of array_a
/// @param array_b source array_b
/// @param size_b size of array_b
/// @return if every couples of arrays elements and sizes are equal, function will return true, else false
bool is_equal(long long array_a[], int size_a, long long array_b[], int size_b) {
    if (size_a == size_b) {
        for (int i = 0; i < size_a; i++) {
            if (array_a[i] != array_b[i]) {
                return false;
                break;
            }
        }
        return true;
    }
    else {
        return false;
    }
}

/// @brief comparison of arrays
/// @param array_a source array_a
/// @param size_a size of array_a
/// @param array_b source array_b
/// @param size_b size of array_b
/// @return if every couples of arrays elements and sizes are equal, function will return true, else false
bool is_equal(float array_a[], int size_a, float array_b[], int size_b) {
    if (size_a == size_b) {
        for (int i = 0; i < size_a; i++) {
            if (array_a[i] != array_b[i]) {
                return false;
                break;
            }
        }
        return true;
    }
    else {
        return false;
    }
}

/// @brief comparison of arrays
/// @param array_a source array_a
/// @param size_a size of array_a
/// @param array_b source array_b
/// @param size_b size of array_b
/// @return if every couples of arrays elements and sizes are equal, function will return true, else false
bool is_equal(double array_a[], int size_a, double array_b[], int size_b) {
    if (size_a == size_b) {
        for (int i = 0; i < size_a; i++) {
            if (array_a[i] != array_b[i]) {
                return false;
                break;
            }
        }
        return true;
    }
    else {
        return false;
    }
}

/// @brief comparison of arrays
/// @param array_a source array_a
/// @param size_a size of array_a
/// @param array_b source array_b
/// @param size_b size of array_b
/// @return if every couples of arrays elements and sizes are equal, function will return true, else false
bool is_equal(int array_a[], long long size_a, int array_b[], long long size_b) {
    if (size_a == size_b) {
        for (long long i = 0; i < size_a; i++) {
            if (array_a[i] != array_b[i]) {
                return false;
                break;
            }
        }
        return true;
    }
    else {
        return false;
    }
}

/// @brief comparison of arrays
/// @param array_a source array_a
/// @param size_a size of array_a
/// @param array_b source array_b
/// @param size_b size of array_b
/// @return if every couples of arrays elements and sizes are equal, function will return true, else false
bool is_equal(long long array_a[], long long size_a, long long array_b[], long long size_b) {
    if (size_a == size_b) {
        for (long long i = 0; i < size_a; i++) {
            if (array_a[i] != array_b[i]) {
                return false;
                break;
            }
        }
        return true;
    }
    else {
        return false;
    }
}

/// @brief comparison of arrays
/// @param array_a source array_a
/// @param size_a size of array_a
/// @param array_b source array_b
/// @param size_b size of array_b
/// @return if every couples of arrays elements and sizes are equal, function will return true, else false
bool is_equal(float array_a[], long long size_a, float array_b[], long long size_b) {
    if (size_a == size_b) {
        for (long long i = 0; i < size_a; i++) {
            if (array_a[i] != array_b[i]) {
                return false;
                break;
            }
        }
        return true;
    }
    else {
        return false;
    }
}

/// @brief comparison of arrays
/// @param array_a source array_a
/// @param size_a size of array_a
/// @param array_b source array_b
/// @param size_b size of array_b
/// @return if every couples of arrays elements and sizes are equal, function will return true, else false
bool is_equal(double array_a[], long long size_a, double array_b[], long long size_b) {
    if (size_a == size_b) {
        for (long long i = 0; i < size_a; i++) {
            if (array_a[i] != array_b[i]) {
                return false;
                break;
            }
        }
        return true;
    }
    else {
        return false;
    }
}
