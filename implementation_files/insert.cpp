#include "../arraymodule.hpp"
#include <iostream>

using namespace std;

/// @brief inserting element into array in specific position
/// @param array source array
/// @param size size of array
/// @param position position of inserting
/// @param item inserted element
void insert(int array[], int& size, int position, int item) {
    size++;
    for (int i = size; i >= position; i--) {
        int tmp = array[i + 1];
        array[i + 1] = array[i];
        array[i + 2] = tmp;
    }
    array[position] = item;
}

/// @brief inserting element into array in specific position
/// @param array source array
/// @param size size of array
/// @param position position of inserting
/// @param item inserted element
void insert(long long array[], int& size, int position, long long item) {
    size++;
    for (int i = size; i >= position; i--) {
        long long tmp = array[i + 1];
        array[i + 1] = array[i];
        array[i + 2] = tmp;
    }
    array[position] = item;
}

/// @brief inserting element into array in specific position
/// @param array source array
/// @param size size of array
/// @param position position of inserting
/// @param item inserted element
void insert(float array[], int& size, int position, float item) {
    size++;
    for (int i = size; i >= position; i--) {
        float tmp = array[i + 1];
        array[i + 1] = array[i];
        array[i + 2] = tmp;
    }
    array[position] = item;
}

/// @brief inserting element into array in specific position
/// @param array source array
/// @param size size of array
/// @param position position of inserting
/// @param item inserted element
void insert(double array[], int& size, int position, double item) {
    size++;
    for (int i = size; i >= position; i--) {
        double tmp = array[i + 1];
        array[i + 1] = array[i];
        array[i + 2] = tmp;
    }
    array[position] = item;
}

/// @brief inserting element into array in specific position
/// @param array source array
/// @param size size of array
/// @param position position of inserting
/// @param item inserted element
void insert(int array[], long long& size, long long position, int item) {
    size++;
    for (long long i = size; i >= position; i--) {
        int tmp = array[i + 1];
        array[i + 1] = array[i];
        array[i + 2] = tmp;
    }
    array[position] = item;
}

/// @brief inserting element into array in specific position
/// @param array source array
/// @param size size of array
/// @param position position of inserting
/// @param item inserted element
void insert(long long array[], long long& size, long long position, long long item) {
    size++;
    for (long long i = size; i >= position; i--) {
        long long tmp = array[i + 1];
        array[i + 1] = array[i];
        array[i + 2] = tmp;
    }
    array[position] = item;
}

/// @brief inserting element into array in specific position
/// @param array source array
/// @param size size of array
/// @param position position of inserting
/// @param item inserted element
void insert(float array[], long long& size, long long position, float item) {
    size++;
    for (long long i = size; i >= position; i--) {
        float tmp = array[i + 1];
        array[i + 1] = array[i];
        array[i + 2] = tmp;
    }
    array[position] = item;
}

/// @brief inserting element into array in specific position
/// @param array source array
/// @param size size of array
/// @param position position of inserting
/// @param item inserted element
void insert(double array[], long long& size, long long position, double item) {
    size++;
    for (long long i = size; i >= position; i--) {
        double tmp = array[i + 1];
        array[i + 1] = array[i];
        array[i + 2] = tmp;
    }
    array[position] = item;
}
