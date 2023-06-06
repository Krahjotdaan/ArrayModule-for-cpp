#include "../arraymodule.hpp"
#include <iostream>

using namespace std;

/// @brief sum of elements of array
/// @param array source array
/// @param size size of array
/// @return sum of elements of array
int sum(int array[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
  return sum;
}

/// @brief sum of elements of array
/// @param array source array
/// @param size size of array
/// @return sum of elements of array
long long sum(long long array[], int size) {
    long long sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
  return sum;
}

/// @brief sum of elements of array
/// @param array source array
/// @param size size of array
/// @return sum of elements of array
float sum(float array[], int size) {
    float sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
  return sum;
}

/// @brief sum of elements of array
/// @param array source array
/// @param size size of array
/// @return sum of elements of array
double sum(double array[], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
  return sum;
}

/// @brief sum of elements of array
/// @param array source array
/// @param size size of array
/// @return sum of elements of array
int sum(int array[], long long size) {
    int sum = 0;
    for (long long i = 0; i < size; i++) {
        sum += array[i];
    }
  return sum;
}

/// @brief sum of elements of array
/// @param array source array
/// @param size size of array
/// @return sum of elements of array
long long sum(long long array[], long long size) {
    long long sum = 0;
    for (long long i = 0; i < size; i++) {
        sum += array[i];
    }
  return sum;
}

/// @brief sum of elements of array
/// @param array source array
/// @param size size of array
/// @return sum of elements of array
float sum(float array[], long long size) {
    float sum = 0;
    for (long long i = 0; i < size; i++) {
        sum += array[i];
    }
  return sum;
}

/// @brief sum of elements of array
/// @param array source array
/// @param size size of array
/// @return sum of elements of array
double sum(double array[], long long size) {
    double sum = 0;
    for (long long i = 0; i < size; i++) {
        sum += array[i];
    }
  return sum;
}
