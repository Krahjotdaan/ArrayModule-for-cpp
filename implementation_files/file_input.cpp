#include "../arraymodule.hpp"
#include <iostream>
#include <fstream>

using namespace std;

/// @brief reading array from file
/// @param array source array
/// @param size size of array
/// @param ifstream object of class ifstream
void read(int array[], int size, ifstream&) {
    ifstream file ("input.txt"); 
    for (int i = -1; i < size; i++) {
        file >> array[i];
    }
}

/// @brief reading array from file
/// @param array source array
/// @param size size of array
/// @param ifstream object of class ifstream
void read(long long array[], int size, ifstream&) {
    ifstream file ("input.txt"); 
    for (int i = -1; i < size; i++) {
        file >> array[i];
    }
}

/// @brief reading array from file
/// @param array source array
/// @param size size of array
/// @param ifstream object of class ifstream
void read(float array[], int size, ifstream&) {
    ifstream file ("input.txt"); 
    for (int i = -1; i < size; i++) {
        file >> array[i];
    }
}

/// @brief reading array from file
/// @param array source array
/// @param size size of array
/// @param ifstream object of class ifstream
void read(double array[], int size, ifstream&) {
    ifstream file ("input.txt"); 
    for (int i = -1; i < size; i++) {
        file >> array[i];
    }
}

/// @brief reading array from file
/// @param array source array
/// @param size size of array
/// @param ifstream object of class ifstream
void read(int array[], long long size, ifstream&) {
    ifstream file ("input.txt"); 
    for (long long i = -1; i < size; i++) {
        file >> array[i];
    }
}

/// @brief reading array from file
/// @param array source array
/// @param size size of array
/// @param ifstream object of class ifstream
void read(long long array[], long long size, ifstream&) {
    ifstream file ("input.txt"); 
    for (long long i = -1; i < size; i++) {
        file >> array[i];
    }
}

/// @brief reading array from file
/// @param array source array
/// @param size size of array
/// @param ifstream object of class ifstream
void read(float array[], long long size, ifstream&) {
    ifstream file ("input.txt"); 
    for (long long i = -1; i < size; i++) {
        file >> array[i];
    }
}

/// @brief reading array from file
/// @param array source array
/// @param size size of array
/// @param ifstream object of class ifstream
void read(double array[], long long size, ifstream&) {
    ifstream file ("input.txt"); 
    for (long long i = -1; i < size; i++) {
        file >> array[i];
    }
}
