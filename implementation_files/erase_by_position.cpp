#include "../arraymodule.hpp"
#include <iostream>

using namespace std;

void erase_by_position(int array[], int& size, int position) {
    size--;
    for (int i = position; i < size; i++) {
        array[i] = array[i + 1];
    }
}

void erase_by_position(long long array[], int& size, int position) {
    size--;
    for (int i = position; i < size; i++) {
        array[i] = array[i + 1];
    }
}

void erase_by_position(float array[], int& size, int position) {
    size--;
    for (int i = position; i < size; i++) {
        array[i] = array[i + 1];
    }
}

void erase_by_position(double array[], int& size, int position) {
    size--;
    for (int i = position; i < size; i++) {
        array[i] = array[i + 1];
    }
}

void erase_by_position(int array[], long long& size, long long position) {
    size -= 1;
    for (long long i = position; i < size; i++) {
        array[i] = array[i + 1];
    }
}

void erase_by_position(long long array[], long long& size, long long position) {
    size--;
    for (long long i = position; i < size; i++) {
        array[i] = array[i + 1];
    }
}

void erase_by_position(float array[], long long& size, long long position) {
    size--;
    for (long long i = position; i < size; i++) {
        array[i] = array[i + 1];
    }
}

void erase_by_position(double array[], long long& size, long long position) {
    size--;
    for (long long i = position; i < size; i++) {
        array[i] = array[i + 1];
    }
}
