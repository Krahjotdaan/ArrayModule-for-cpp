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
