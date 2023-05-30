#include "../arraymodule.hpp"
#include <iostream>

using namespace std;

void fill(int array[], int size, int item = 0) {
    for (int i = 0; i < size; i++) {
        array[i] = item;
    }
}

void fill(long long array[], int size, long long item = 0) {
    for (int i = 0; i < size; i++) {
        array[i] = item;
    }
}

void fill(float array[], int size, float item = 0) {
    for (int i = 0; i < size; i++) {
        array[i] = item;
    }
}

void fill(double array[], int size, double item = 0) {
    for (int i = 0; i < size; i++) {
        array[i] = item;
    }
}
