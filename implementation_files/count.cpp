#include "../arraymodule.hpp"
#include <iostream>

using namespace std;

int count(int array[], int size, int item) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] == item) {
            count++;
        }
    }
    return count;
}

int count(long long array[], int size, long long item) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] == item) {
            count++;
        }
    }
    return count;
}

int count(float array[], int size, float item) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] == item) {
            count++;
        }
    }
    return count;
}

int count(double array[], int size, double item) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] == item) {
            count++;
        }
    }
    return count;
}
