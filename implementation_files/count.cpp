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

long long count(int array[], long long size, int item) {
    long long count = 0;
    for (long long i = 0; i < size; i++) {
        if (array[i] == item) {
            count++;
        }
    }
    return count;
}

long long count(long long array[], long long size, long long item) {
    long long count = 0;
    for (long long i = 0; i < size; i++) {
        if (array[i] == item) {
            count++;
        }
    }
    return count;
}

long long count(float array[], long long size, float item) {
    long long count = 0;
    for (long long i = 0; i < size; i++) {
        if (array[i] == item) {
            count++;
        }
    }
    return count;
}

long long count(double array[], long long size, double item) {
    int count = 0;
    for (long long i = 0; i < size; i++) {
        if (array[i] == item) {
            count++;
        }
    }
    return count;
}
