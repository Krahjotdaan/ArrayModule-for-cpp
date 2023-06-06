#include "../arraymodule.hpp"
#include <iostream>

using namespace std;

/// @brief wtiting array to console
/// @param array source array
/// @param size size of array
void print(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";
}

/// @brief wtiting array to console
/// @param array source array
/// @param size size of array
void print(long long array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";
}

/// @brief wtiting array to console
/// @param array source array
/// @param size size of array
void print(float array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";
}

/// @brief wtiting array to console
/// @param array source array
/// @param size size of array
void print(double array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";
}

/// @brief wtiting array to console
/// @param array source array
/// @param size size of array
void print(int array[], long long size) {
    for (long long i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";
}

/// @brief wtiting array to console
/// @param array source array
/// @param size size of array
void print(long long array[], long long size) {
    for (long long i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";
}

/// @brief wtiting array to console
/// @param array source array
/// @param size size of array
void print(float array[], long long size) {
    for (long long i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";
}

/// @brief wtiting array to console
/// @param array source array
/// @param size size of array
void print(double array[], long long size) {
    for (long long i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";
}
