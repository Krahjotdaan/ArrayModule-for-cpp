#include "../arraymodule.hpp"
#include <iostream>
#include <fstream>

using namespace std;

void print(int array[], int size, ofstream&) {
    ofstream file("output.txt");
    for (int i = 0; i < size; i++) {
        file << array[i] << " ";
    }
    file << "\n";
}

void print(long long array[], int size, ofstream&) {
    ofstream file("output.txt");
    for (int i = 0; i < size; i++) {
        file << array[i] << " ";
    }
    file << "\n";
}

void print(float array[], int size, ofstream&) {
    ofstream file("output.txt");
    for (int i = 0; i < size; i++) {
        file << array[i] << " ";
    }
    file << "\n";
}

void print(double array[], int size, ofstream&) {
    ofstream file("output.txt");
    for (int i = 0; i < size; i++) {
        file << array[i] << " ";
    }
    file << "\n";
}
