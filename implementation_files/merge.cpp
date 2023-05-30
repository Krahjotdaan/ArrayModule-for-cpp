#include "../arraymodule.hpp"
#include <iostream>

using namespace std;

void merge(int array_a[], int& size_a, int array_b[], int size_b) {
    int tmp = size_a;
    size_a += size_b;
    int k = 0;
    for (int i = tmp; i < size_a; i++) {
        array_a[i] = array_b[k];
        k++;
    }
}

void merge(long long array_a[], int& size_a, long long array_b[], int size_b) {
    int tmp = size_a;
    size_a += size_b;
    int k = 0;
    for (int i = tmp; i < size_a; i++) {
        array_a[i] = array_b[k];
        k++;
    }
}

void merge(float array_a[], int& size_a, float array_b[], int size_b) {
    int tmp = size_a;
    size_a += size_b;
    int k = 0;
    for (int i = tmp; i < size_a; i++) {
        array_a[i] = array_b[k];
        k++;
    }
}

void merge(double array_a[], int& size_a, double array_b[], int size_b) {
    int tmp = size_a;
    size_a += size_b;
    int k = 0;
    for (int i = tmp; i < size_a; i++) {
        array_a[i] = array_b[k];
        k++;
    }
}

void merge(int array_a[], long long& size_a, int array_b[], long long size_b) {
    long long tmp = size_a;
    size_a += size_b;
    long long k = 0;
    for (long long i = tmp; i < size_a; i++) {
        array_a[i] = array_b[k];
        k++;
    }
}

void merge(long long array_a[], long long& size_a, long long array_b[], long long size_b) {
    long long tmp = size_a;
    size_a += size_b;
    long long k = 0;
    for (long long i = tmp; i < size_a; i++) {
        array_a[i] = array_b[k];
        k++;
    }
}

void merge(float array_a[], long long& size_a, float array_b[], long long size_b) {
    long long tmp = size_a;
    size_a += size_b;
    long long k = 0;
    for (long long i = tmp; i < size_a; i++) {
        array_a[i] = array_b[k];
        k++;
    }
}

void merge(double array_a[], long long& size_a, double array_b[], long long size_b) {
    long long tmp = size_a;
    size_a += size_b;
    long long k = 0;
    for (long long i = tmp; i < size_a; i++) {
        array_a[i] = array_b[k];
        k++;
    }
}
