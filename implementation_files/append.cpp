#include "../arraymodule.hpp"
#include <iostream>

using namespace std;

void append(int array[], int& size, int item) {
    size++;
    array[size - 1] = item;
}

void append(long long array[], int& size, long long item) {
    size++;
    array[size - 1] = item;
}

void append(float array[], int& size, float item) {
    size++;
    array[size - 1] = item;
}

void append(double array[], int& size, double item) {
    size++;
    array[size - 1] = item;
}
