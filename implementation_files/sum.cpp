#include "../arraymodule.hpp"
#include <iostream>

using namespace std;

int sum(int array[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
  return sum;
}

long long sum(long long array[], int size) {
    long long sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
  return sum;
}

float sum(float array[], int size) {
    float sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
  return sum;
}

double sum(double array[], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
  return sum;
}
