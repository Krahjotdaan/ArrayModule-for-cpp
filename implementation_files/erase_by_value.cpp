#include "../arraymodule.hpp"
#include <iostream>

using namespace std;

void erase_by_value(int array[], int& size, int value, int occurrence = 1) {
    size--;
    int s = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] == value) {
            s++;
            if (s == occurrence) {
                for (int j = i; i < size; i++) {
                    array[j] = array[j + 1];
                }
            }
        }
    }
}

void erase_by_value(long long array[], int& size, long long value, int occurrence = 1) {
    size--;
    int s = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] == value) {
            s++;
            if (s == occurrence) {
                for (int j = i; i < size; i++) {
                    array[j] = array[j + 1];
                }
            }
        }
    }
}

void erase_by_value(float array[], int& size, float value, int occurrence = 1) {
    size--;
    int s = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] == value) {
            s++;
            if (s == occurrence) {
                for (int j = i; i < size; i++) {
                    array[j] = array[j + 1];
                }
            }
        }
    }
}

void erase_by_value(double array[], int& size, double value, int occurrence = 1) {
    size--;
    int s = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] == value) {
            s++;
            if (s == occurrence) {
                for (int j = i; i < size; i++) {
                    array[j] = array[j + 1];
                }
            }
        }
    }
}

void erase_by_value(int array[], long long& size, int value, long long occurrence = 1) {
    size--;
    long long s = 0;
    for (long long i = 0; i < size; i++) {
        if (array[i] == value) {
            s++;
            if (s == occurrence) {
                for (long long j = i; i < size; i++) {
                    array[j] = array[j + 1];
                }
            }
        }
    }
}

void erase_by_value(long long array[], long long& size, long long value, long long occurrence = 1) {
    size--;
    long long s = 0;
    for (long long i = 0; i < size; i++) {
        if (array[i] == value) {
            s++;
            if (s == occurrence) {
                for (long long j = i; i < size; i++) {
                    array[j] = array[j + 1];
                }
            }
        }
    }
}

void erase_by_value(float array[], long long& size, float value, long long occurrence = 1) {
    size--;
    long long s = 0;
    for (long long i = 0; i < size; i++) {
        if (array[i] == value) {
            s++;
            if (s == occurrence) {
                for (long long j = i; i < size; i++) {
                    array[j] = array[j + 1];
                }
            }
        }
    }
}

void erase_by_value(double array[], long long& size, double value, long long occurrence = 1) {
    size--;
    long long s = 0;
    for (long long i = 0; i < size; i++) {
        if (array[i] == value) {
            s++;
            if (s == occurrence) {
                for (long long j = i; i < size; i++) {
                    array[j] = array[j + 1];
                }
            }
        }
    }
}
