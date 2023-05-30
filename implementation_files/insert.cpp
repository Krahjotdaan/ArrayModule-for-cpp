#include "../arraymodule.hpp"
#include <iostream>

using namespace std;

void insert(int array[], int& size, int position, int item) {
    size++;
    for (int i = size; i >= position; i--) {
        int tmp = array[i + 1];
        array[i + 1] = array[i];
        array[i + 2] = tmp;
    }
    array[position] = item;
}

void insert(long long array[], int& size, int position, long long item) {
    size++;
    for (int i = size; i >= position; i--) {
        long long tmp = array[i + 1];
        array[i + 1] = array[i];
        array[i + 2] = tmp;
    }
    array[position] = item;
}

void insert(float array[], int& size, int position, float item) {
    size++;
    for (int i = size; i >= position; i--) {
        float tmp = array[i + 1];
        array[i + 1] = array[i];
        array[i + 2] = tmp;
    }
    array[position] = item;
}

void insert(double array[], int& size, int position, double item) {
    size++;
    for (int i = size; i >= position; i--) {
        double tmp = array[i + 1];
        array[i + 1] = array[i];
        array[i + 2] = tmp;
    }
    array[position] = item;
}
