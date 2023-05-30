#include "../arraymodule.hpp"
#include <iostream>

using namespace std;

bool is_equal(int array_a[], int size_a, int array_b[], int size_b) {
    if (size_a == size_b) {
        for (int i = 0; i < size_a; i++) {
            if (array_a[i] != array_b[i]) {
                return false;
                break;
            }
        }
        return true;
    }
    else {
        return false;
    }
}

bool is_equal(long long array_a[], int size_a, long long array_b[], int size_b) {
    if (size_a == size_b) {
        for (int i = 0; i < size_a; i++) {
            if (array_a[i] != array_b[i]) {
                return false;
                break;
            }
        }
        return true;
    }
    else {
        return false;
    }
}

bool is_equal(float array_a[], int size_a, float array_b[], int size_b) {
    if (size_a == size_b) {
        for (int i = 0; i < size_a; i++) {
            if (array_a[i] != array_b[i]) {
                return false;
                break;
            }
        }
        return true;
    }
    else {
        return false;
    }
}

bool is_equal(double array_a[], int size_a, double array_b[], int size_b) {
    if (size_a == size_b) {
        for (int i = 0; i < size_a; i++) {
            if (array_a[i] != array_b[i]) {
                return false;
                break;
            }
        }
        return true;
    }
    else {
        return false;
    }
}
