#include "../arraymodule.hpp"
#include <iostream>

using namespace std;

/// @brief searching element of array with minimum value 
/// @param array source array
/// @param size size of array
/// @return element with minimum value 
int min(int array[], int size) {
    int min = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

/// @brief searching element of array with minimum value 
/// @param array source array
/// @param size size of array
/// @return element with minimum value 
long long min(long long array[], int size) {
    long long min = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

/// @brief searching element of array with minimum value 
/// @param array source array
/// @param size size of array
/// @return element with minimum value 
float min(float array[], int size) {
    float min = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

/// @brief searching element of array with minimum value 
/// @param array source array
/// @param size size of array
/// @return element with minimum value 
double min(double array[], int size) {
    double min = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

/// @brief searching element of array with minimum value 
/// @param array source array
/// @param size size of array
/// @return element with minimum value 
int min(int array[], long long size) {
    int min = array[0];
    for (long long i = 1; i < size; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

/// @brief searching element of array with minimum value 
/// @param array source array
/// @param size size of array
/// @return element with minimum value 
long long min(long long array[], long long size) {
    long long min = array[0];
    for (long long i = 1; i < size; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

/// @brief searching element of array with minimum value 
/// @param array source array
/// @param size size of array
/// @return element with minimum value 
float min(float array[], long long size) {
    float min = array[0];
    for (long long i = 1; i < size; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

/// @brief searching element of array with minimum value 
/// @param array source array
/// @param size size of array
/// @return element with minimum value 
double min(double array[], long long size) {
    double min = array[0];
    for (long long i = 1; i < size; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}
