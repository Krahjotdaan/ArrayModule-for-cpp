#include "../arraymodule.hpp"
#include <iostream>

using namespace std;

void copy(int array_a[], int size, int array_b[]) {
    for (int i = 0; i < size; i++) {
        array_b[i] = array_a[i];
    }
}

void copy(long long array_a[], int size, long long array_b[]) {
    for (int i = 0; i < size; i++) {
        array_b[i] = array_a[i];
    }
}

void copy(float array_a[], int size, float array_b[]) {
    for (int i = 0; i < size; i++) {
        array_b[i] = array_a[i];
    }
}

void copy(double array_a[], int size, double array_b[]) {
    for (int i = 0; i < size; i++) {
        array_b[i] = array_a[i];
    }
}
