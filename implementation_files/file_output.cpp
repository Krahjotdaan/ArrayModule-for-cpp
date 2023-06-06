#include "../arraymodule.hpp"
#include <iostream>
#include <fstream>

using namespace std;

/// @brief writing array to file
/// @param array source array
/// @param size size of array
/// @param ofstream object of class ofstream
void print(int array[], int size, ofstream&) {
    ofstream file("output.txt");
    for (int i = 0; i < size; i++) {
        file << array[i] << " ";
    }
    file << "\n";
}

/// @brief writing array to file
/// @param array source array
/// @param size size of array
/// @param ofstream object of class ofstream
void print(long long array[], int size, ofstream&) {
    ofstream file("output.txt");
    for (int i = 0; i < size; i++) {
        file << array[i] << " ";
    }
    file << "\n";
}

/// @brief writing array to file
/// @param array source array
/// @param size size of array
/// @param ofstream object of class ofstream
void print(float array[], int size, ofstream&) {
    ofstream file("output.txt");
    for (int i = 0; i < size; i++) {
        file << array[i] << " ";
    }
    file << "\n";
}

/// @brief writing array to file
/// @param array source array
/// @param size size of array
/// @param ofstream object of class ofstream
void print(double array[], int size, ofstream&) {
    ofstream file("output.txt");
    for (int i = 0; i < size; i++) {
        file << array[i] << " ";
    }
    file << "\n";
}

/// @brief writing array to file
/// @param array source array
/// @param size size of array
/// @param ofstream object of class ofstream
void print(int array[], long long size, ofstream&) {
    ofstream file("output.txt");
    for (long long i = 0; i < size; i++) {
        file << array[i] << " ";
    }
    file << "\n";
}

/// @brief writing array to file
/// @param array source array
/// @param size size of array
/// @param ofstream object of class ofstream
void print(long long array[], long long size, ofstream&) {
    ofstream file("output.txt");
    for (long long i = 0; i < size; i++) {
        file << array[i] << " ";
    }
    file << "\n";
}

/// @brief writing array to file
/// @param array source array
/// @param size size of array
/// @param ofstream object of class ofstream
void print(float array[], long long size, ofstream&) {
    ofstream file("output.txt");
    for (long long i = 0; i < size; i++) {
        file << array[i] << " ";
    }
    file << "\n";
}

/// @brief writing array to file
/// @param array source array
/// @param size size of array
/// @param ofstream object of class ofstream
void print(double array[], long long size, ofstream&) {
    ofstream file("output.txt");
    for (long long i = 0; i < size; i++) {
        file << array[i] << " ";
    }
    file << "\n";
}
