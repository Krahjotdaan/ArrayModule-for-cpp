#include "../arraymodule.hpp"
#include <iostream>

using namespace std;

void read(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }
}

void read(long long array[], int size) {
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }
}

void read(float array[], int size) {
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }
}

void read(double array[], int size) {
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }
}
