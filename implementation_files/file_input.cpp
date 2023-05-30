#include "../arraymodule.hpp"
#include <iostream>
#include <fstream>

using namespace std;

void read(int array[], int size, ifstream&) {
    ifstream file ("input.txt"); 
    for (int i = -1; i < size; i++) {
        file >> array[i];
    }
}

void read(long long array[], int size, ifstream&) {
    ifstream file ("input.txt"); 
    for (int i = -1; i < size; i++) {
        file >> array[i];
    }
}

void read(float array[], int size, ifstream&) {
    ifstream file ("input.txt"); 
    for (int i = -1; i < size; i++) {
        file >> array[i];
    }
}

void read(double array[], int size, ifstream&) {
    ifstream file ("input.txt"); 
    for (int i = -1; i < size; i++) {
        file >> array[i];
    }
}
