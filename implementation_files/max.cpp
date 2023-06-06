#include "../arraymodule.hpp"
#include <iostream>

using namespace std;

/// @brief searching element of array with maximum value 
/// @param array source array
/// @param size size of array
/// @return element with maximum value 
int max(int array[], int size) {
    int max = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

/// @brief searching element of array with maximum value 
/// @param array source array
/// @param size size of array
/// @return element with maximum value 
long long max(long long array[], int size) {
    long long max = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

/// @brief searching element of array with maximum value 
/// @param array source array
/// @param size size of array
/// @return element with maximum value 
float max(float array[], int size) {
    float max = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

/// @brief searching element of array with maximum value 
/// @param array source array
/// @param size size of array
/// @return element with maximum value 
double max(double array[], int size) {
    double max = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

/// @brief searching element of array with maximum value 
/// @param array source array
/// @param size size of array
/// @return element with maximum value 
int max(int array[], long long size) {
    int max = array[0];
    for (long long i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

/// @brief searching element of array with maximum value 
/// @param array source array
/// @param size size of array
/// @return element with maximum value 
long long max(long long array[], long long size) {
    long long max = array[0];
    for (long long i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

/// @brief searching element of array with maximum value 
/// @param array source array
/// @param size size of array
/// @return element with maximum value 
float max(float array[], long long size) {
    float max = array[0];
    for (long long i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

/// @brief searching element of array with maximum value 
/// @param array source array
/// @param size size of array
/// @return element with maximum value 
double max(double array[], long long size) {
    double max = array[0];
    for (long long i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}
