#include "../arraymodule.hpp"
#include <iostream>

using namespace std;

int find(int array[], int size, int item) {
    for (int i = 0; i < size; i++) {
        if (array[i] == item) {
            return i;
            break;
        } 
        else {
            return -1;
        }
    }
}

int find(long long array[], int size, long long item) {
    for (int i = 0; i < size; i++) {
        if (array[i] == item) {
            return i;
            break;
        } 
        else {
            return -1;
        }
    }
}

int find(float array[], int size, float item) {
    for (int i = 0; i < size; i++) {
        if (array[i] == item) {
            return i;
            break;
        } 
        else {
            return -1;
        }
    }
}

int find(double array[], int size, double item) {
    for (int i = 0; i < size; i++) {
        if (array[i] == item) {
            return i;
            break;
        } 
        else {
            return -1;
        }
    }
}

long long find(int array[], long long size, int item) {
    for (long long i = 0; i < size; i++) {
        if (array[i] == item) {
            return i;
            break;
        } 
        else {
            return -1;
        }
    }
}

long long find(long long array[], long long size, long long item) {
    for (long long i = 0; i < size; i++) {
        if (array[i] == item) {
            return i;
            break;
        } 
        else {
            return -1;
        }
    }
}

long long find(float array[], long long size, float item) {
    for (long long i = 0; i < size; i++) {
        if (array[i] == item) {
            return i;
            break;
        } 
        else {
            return -1;
        }
    }
}

long long find(double array[], long long size, double item) {
    for (long long i = 0; i < size; i++) {
        if (array[i] == item) {
            return i;
            break;
        } 
        else {
            return -1;
        }
    }
}
