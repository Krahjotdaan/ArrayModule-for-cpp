#include "../arraymodule.hpp"
#include <iostream>

using namespace std;

void shift(int array[], int size, int value) {
    if (value > 0) {
        for (int i = 0; i < value; i++) {
            int tmp = array[size - 1];
            for (int j = size - 1; j >= 0; j--) {
                array[j + 1] = array[j];
            }
            array[0] = tmp;
        }
    }
    else if (value < 0) {
        for (int i = 0; i < value * -1; i++) {
            int tmp = array[0];
            for (int j = 0; j < size; j++) {
                array[j] = array[j + 1];
            }
            array[size - 1] = tmp;
        }
    }
}

void shift(long long array[], int size, int value) {
    if (value > 0) {
        for (int i = 0; i < value; i++) {
            long long tmp = array[size - 1];
            for (int j = size - 1; j >= 0; j--) {
                array[j + 1] = array[j];
            }
            array[0] = tmp;
        }
    }
    else if (value < 0) {
        for (int i = 0; i < value * -1; i++) {
            long long tmp = array[0];
            for (int j = 0; j < size; j++) {
                array[j] = array[j + 1];
            }
            array[size - 1] = tmp;
        }
    }
}

void shift(float array[], int size, int value) {
    if (value > 0) {
        for (int i = 0; i < value; i++) {
            float tmp = array[size - 1];
            for (int j = size - 1; j >= 0; j--) {
                array[j + 1] = array[j];
            }
            array[0] = tmp;
        }
    }
    else if (value < 0) {
        for (int i = 0; i < value * -1; i++) {
            float tmp = array[0];
            for (int j = 0; j < size; j++) {
                array[j] = array[j + 1];
            }
            array[size - 1] = tmp;
        }
    }
}

void shift(double array[], int size, int value) {
    if (value > 0) {
        for (int i = 0; i < value; i++) {
            double tmp = array[size - 1];
            for (int j = size - 1; j >= 0; j--) {
                array[j + 1] = array[j];
            }
            array[0] = tmp;
        }
    }
    else if (value < 0) {
        for (int i = 0; i < value * -1; i++) {
            double tmp = array[0];
            for (int j = 0; j < size; j++) {
                array[j] = array[j + 1];
            }
            array[size - 1] = tmp;
        }
    }
}

void shift(int array[], long long size, int value) {
    if (value > 0) {
        for (int i = 0; i < value; i++) {
            int tmp = array[size - 1];
            for (int j = size - 1; j >= 0; j--) {
                array[j + 1] = array[j];
            }
            array[0] = tmp;
        }
    }
    else if (value < 0) {
        for (int i = 0; i < value * -1; i++) {
            int tmp = array[0];
            for (int j = 0; j < size; j++) {
                array[j] = array[j + 1];
            }
            array[size - 1] = tmp;
        }
    }
}

void shift(long long array[], long long size, int value) {
    if (value > 0) {
        for (int i = 0; i < value; i++) {
            long long tmp = array[size - 1];
            for (int j = size - 1; j >= 0; j--) {
                array[j + 1] = array[j];
            }
            array[0] = tmp;
        }
    }
    else if (value < 0) {
        for (int i = 0; i < value * -1; i++) {
            long long tmp = array[0];
            for (int j = 0; j < size; j++) {
                array[j] = array[j + 1];
            }
            array[size - 1] = tmp;
        }
    }
}

void shift(float array[], long long size, int value) {
    if (value > 0) {
        for (int i = 0; i < value; i++) {
            float tmp = array[size - 1];
            for (int j = size - 1; j >= 0; j--) {
                array[j + 1] = array[j];
            }
            array[0] = tmp;
        }
    }
    else if (value < 0) {
        for (int i = 0; i < value * -1; i++) {
            float tmp = array[0];
            for (int j = 0; j < size; j++) {
                array[j] = array[j + 1];
            }
            array[size - 1] = tmp;
        }
    }
}

void shift(double array[], long long size, int value) {
    if (value > 0) {
        for (int i = 0; i < value; i++) {
            double tmp = array[size - 1];
            for (int j = size - 1; j >= 0; j--) {
                array[j + 1] = array[j];
            }
            array[0] = tmp;
        }
    }
    else if (value < 0) {
        for (int i = 0; i < value * -1; i++) {
            double tmp = array[0];
            for (int j = 0; j < size; j++) {
                array[j] = array[j + 1];
            }
            array[size - 1] = tmp;
        }
    }
}
