#include "../arraymodule.hpp"
#include <iostream>

using namespace std;

void reverse(int array[], int size) {
    int s = size - 1;
    for (int i = 0; i < size / 2; i++) {
        int tmp = array[i];
        array[i] = array[s];
        array[s] = tmp;
        s--;
    }
}

void reverse(long long array[], int size) {
    int s = size - 1;
    for (int i = 0; i < size / 2; i++) {
        long long tmp = array[i];
        array[i] = array[s];
        array[s] = tmp;
        s--;
    }
}

void reverse(float array[], int size) {
    int s = size - 1;
    for (int i = 0; i < size / 2; i++) {
        float tmp = array[i];
        array[i] = array[s];
        array[s] = tmp;
        s--;
    }
}

void reverse(double array[], int size) {
    int s = size - 1;
    for (int i = 0; i < size / 2; i++) {
        double tmp = array[i];
        array[i] = array[s];
        array[s] = tmp;
        s--;
    }
}

void reverse(int array[], long long size) {
    long long s = size - 1;
    for (long long i = 0; i < size / 2; i++) {
        int tmp = array[i];
        array[i] = array[s];
        array[s] = tmp;
        s--;
    }
}

void reverse(long long array[], long long size) {
    long long s = size - 1;
    for (int i = 0; i < size / 2; i++) {
        long long tmp = array[i];
        array[i] = array[s];
        array[s] = tmp;
        s--;
    }
}

void reverse(float array[], long long size) {
    long long s = size - 1;
    for (int i = 0; i < size / 2; i++) {
        float tmp = array[i];
        array[i] = array[s];
        array[s] = tmp;
        s--;
    }
}

void reverse(double array[], long long size) {
    long long s = size - 1;
    for (int i = 0; i < size / 2; i++) {
        double tmp = array[i];
        array[i] = array[s];
        array[s] = tmp;
        s--;
    }
}
