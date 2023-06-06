#include "../arraymodule.hpp"
#include <iostream>

using namespace std;

/// @brief searching of the first occurrence of specific element
/// @param array source array
/// @param size size of array
/// @param item searched element
/// @return index of the first occurrence of item, if there is not item in array, function will return -1
int find(int array[], int size, int item) {
    for (int i = 0; i < size; i++) {
        if (array[i] == item) {
            return i;
            break;
        } 
        else {
            return -1;
        }
    }
}

/// @brief searching of the first occurrence of specific element
/// @param array source array
/// @param size size of array
/// @param item searched element
/// @return index of the first occurrence of item, if there is not item in array, function will return -1
int find(long long array[], int size, long long item) {
    for (int i = 0; i < size; i++) {
        if (array[i] == item) {
            return i;
            break;
        } 
        else {
            return -1;
        }
    }
}

/// @brief searching of the first occurrence of specific element
/// @param array source array
/// @param size size of array
/// @param item searched element
/// @return index of the first occurrence of item, if there is not item in array, function will return -1
int find(float array[], int size, float item) {
    for (int i = 0; i < size; i++) {
        if (array[i] == item) {
            return i;
            break;
        } 
        else {
            return -1;
        }
    }
}

/// @brief searching of the first occurrence of specific element
/// @param array source array
/// @param size size of array
/// @param item searched element
/// @return index of the first occurrence of item, if there is not item in array, function will return -1
int find(double array[], int size, double item) {
    for (int i = 0; i < size; i++) {
        if (array[i] == item) {
            return i;
            break;
        } 
        else {
            return -1;
        }
    }
}

/// @brief searching of the first occurrence of specific element
/// @param array source array
/// @param size size of array
/// @param item searched element
/// @return index of the first occurrence of item, if there is not item in array, function will return -1
long long find(int array[], long long size, int item) {
    for (long long i = 0; i < size; i++) {
        if (array[i] == item) {
            return i;
            break;
        } 
        else {
            return -1;
        }
    }
}

/// @brief searching of the first occurrence of specific element
/// @param array source array
/// @param size size of array
/// @param item searched element
/// @return index of the first occurrence of item, if there is not item in array, function will return -1
long long find(long long array[], long long size, long long item) {
    for (long long i = 0; i < size; i++) {
        if (array[i] == item) {
            return i;
            break;
        } 
        else {
            return -1;
        }
    }
}

/// @brief searching of the first occurrence of specific element
/// @param array source array
/// @param size size of array
/// @param item searched element
/// @return index of the first occurrence of item, if there is not item in array, function will return -1
long long find(float array[], long long size, float item) {
    for (long long i = 0; i < size; i++) {
        if (array[i] == item) {
            return i;
            break;
        } 
        else {
            return -1;
        }
    }
}

/// @brief searching of the first occurrence of specific element
/// @param array source array
/// @param size size of array
/// @param item searched element
/// @return index of the first occurrence of item, if there is not item in array, function will return -1
long long find(double array[], long long size, double item) {
    for (long long i = 0; i < size; i++) {
        if (array[i] == item) {
            return i;
            break;
        } 
        else {
            return -1;
        }
    }
}
