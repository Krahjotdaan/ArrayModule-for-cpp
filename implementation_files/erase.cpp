#include "../arraymodule.hpp"
#include <iostream>

using namespace std;

void erase(int array[], int& size, int position) {
    size -= 1;
    for (int i = position; i < size; i++) {
        array[i] = array[i + 1];
    }
}

void erase(long long array[], int& size, int position) {
    size -= 1;
    for (int i = position; i < size; i++) {
        array[i] = array[i + 1];
    }
}

void erase(float array[], int& size, int position) {
    size -= 1;
    for (int i = position; i < size; i++) {
        array[i] = array[i + 1];
    }
}

void erase(double array[], int& size, int position) {
    size -= 1;
    for (int i = position; i < size; i++) {
        array[i] = array[i + 1];
    }
}

void erase(int array[], long long& size, long long position) {
    size -= 1;
    for (long long i = position; i < size; i++) {
        array[i] = array[i + 1];
    }
}

void erase(long long array[], long long& size, long long position) {
    size -= 1;
    for (long long i = position; i < size; i++) {
        array[i] = array[i + 1];
    }
}

void erase(float array[], long long& size, long long position) {
    size -= 1;
    for (long long i = position; i < size; i++) {
        array[i] = array[i + 1];
    }
}

void erase(double array[], long long& size, long long position) {
    size -= 1;
    for (long long i = position; i < size; i++) {
        array[i] = array[i + 1];
    }
}
