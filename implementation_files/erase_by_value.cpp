#include "../arraymodule.hpp"
#include <iostream>

using namespace std;

/// @brief removing element by its value and occurrence
/// @param array source array
/// @param size size of array
/// @param value value of removed element
/// @param occurrence occurrence of removed element, by default 1
void erase_by_value(int array[], int& size, int value, int occurrence) {
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

/// @brief removing element by its value and occurrence
/// @param array source array
/// @param size size of array
/// @param value value of removed element
/// @param occurrence occurrence of removed element, by default 1
void erase_by_value(long long array[], int& size, long long value, int occurrence) {
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

/// @brief removing element by its value and occurrence
/// @param array source array
/// @param size size of array
/// @param value value of removed element
/// @param occurrence occurrence of removed element, by default 1
void erase_by_value(float array[], int& size, float value, int occurrence) {
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

/// @brief removing element by its value and occurrence
/// @param array source array
/// @param size size of array
/// @param value value of removed element
/// @param occurrence occurrence of removed element, by default 1
void erase_by_value(double array[], int& size, double value, int occurrence) {
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

/// @brief removing element by its value and occurrence
/// @param array source array
/// @param size size of array
/// @param value value of removed element
/// @param occurrence occurrence of removed element, by default 1
void erase_by_value(int array[], long long& size, int value, long long occurrence) {
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

/// @brief removing element by its value and occurrence
/// @param array source array
/// @param size size of array
/// @param value value of removed element
/// @param occurrence occurrence of removed element, by default 1
void erase_by_value(long long array[], long long& size, long long value, long long occurrence) {
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

/// @brief removing element by its value and occurrence
/// @param array source array
/// @param size size of array
/// @param value value of removed element
/// @param occurrence occurrence of removed element, by default 1
void erase_by_value(float array[], long long& size, float value, long long occurrence) {
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

/// @brief removing element by its value and occurrence
/// @param array source array
/// @param size size of array
/// @param value value of removed element
/// @param occurrence occurrence of removed element, by default 1
void erase_by_value(double array[], long long& size, double value, long long occurrence) {
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
