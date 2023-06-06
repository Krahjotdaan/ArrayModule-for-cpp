#include "../arraymodule.hpp"
#include <iostream>

using namespace std;

/// @brief removing all elements of array with given value
/// @param array source array
/// @param size size of array
/// @param value removed value
void erase_all(int array[], int& size, int value) {
    int s = count(array, size, value);
    int positions[s], k = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] == value) {
            positions[k] = i;
            k++;
        }
    }

    int s1 = s;
    for (int i = 0; i < s1; i++) {
        k = 0;
        erase_by_position(array, size, positions[0]);
        erase_by_position(positions, s, 0);
        for (int i = 0; i < size; i++) {
            if (array[i] == value) {
                positions[k] = i;
                k++;
            }
        }
    }
}

/// @brief removing all elements of array with given value
/// @param array source array
/// @param size size of array
/// @param value removed value
void erase_all(long long array[], int& size, long long value) {
    int s = count(array, size, value);
    int positions[s], k = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] == value) {
            positions[k] = i;
            k++;
        }
    }

    int s1 = s;
    for (int i = 0; i < s1; i++) {
        k = 0;
        erase_by_position(array, size, positions[0]);
        erase_by_position(positions, s, 0);
        for (int i = 0; i < size; i++) {
            if (array[i] == value) {
                positions[k] = i;
                k++;
            }
        }
    }
}

/// @brief removing all elements of array with given value
/// @param array source array
/// @param size size of array
/// @param value removed value
void erase_all(float array[], int& size, float value) {
    int s = count(array, size, value);
    int positions[s], k = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] == value) {
            positions[k] = i;
            k++;
        }
    }

    int s1 = s;
    for (int i = 0; i < s1; i++) {
        k = 0;
        erase_by_position(array, size, positions[0]);
        erase_by_position(positions, s, 0);
        for (int i = 0; i < size; i++) {
            if (array[i] == value) {
                positions[k] = i;
                k++;
            }
        }
    }
}

/// @brief removing all elements of array with given value
/// @param array source array
/// @param size size of array
/// @param value removed value
void erase_all(double array[], int& size, double value) {
    int s = count(array, size, value);
    int positions[s], k = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] == value) {
            positions[k] = i;
            k++;
        }
    }

    int s1 = s;
    for (int i = 0; i < s1; i++) {
        k = 0;
        erase_by_position(array, size, positions[0]);
        erase_by_position(positions, s, 0);
        for (int i = 0; i < size; i++) {
            if (array[i] == value) {
                positions[k] = i;
                k++;
            }
        }
    }
}

/// @brief removing all elements of array with given value
/// @param array source array
/// @param size size of array
/// @param value removed value
void erase_all(int array[], long long& size, int value) {
    long long s = count(array, size, value);
    long long positions[s], k = 0;
    for (long long i = 0; i < size; i++) {
        if (array[i] == value) {
            positions[k] = i;
            k++;
        }
    }

    long long s1 = s;
    for (long long i = 0; i < s1; i++) {
        k = 0;
        erase_by_position(array, size, positions[0]);
        erase_by_position(positions, s, 0);
        for (long long i = 0; i < size; i++) {
            if (array[i] == value) {
                positions[k] = i;
                k++;
            }
        }
    }
}

/// @brief removing all elements of array with given value
/// @param array source array
/// @param size size of array
/// @param value removed value
void erase_all(long long array[], long long& size, long long value) {
    long long s = count(array, size, value);
    long long positions[s], k = 0;
    for (long long i = 0; i < size; i++) {
        if (array[i] == value) {
            positions[k] = i;
            k++;
        }
    }

    long long s1 = s;
    for (long long i = 0; i < s1; i++) {
        k = 0;
        erase_by_position(array, size, positions[0]);
        erase_by_position(positions, s, 0);
        for (long long i = 0; i < size; i++) {
            if (array[i] == value) {
                positions[k] = i;
                k++;
            }
        }
    }
}

/// @brief removing all elements of array with given value
/// @param array source array
/// @param size size of array
/// @param value removed value
void erase_all(float array[], long long& size, float value) {
    long long s = count(array, size, value);
    long long positions[s], k = 0;
    for (long long i = 0; i < size; i++) {
        if (array[i] == value) {
            positions[k] = i;
            k++;
        }
    }

    long long s1 = s;
    for (long long i = 0; i < s1; i++) {
        k = 0;
        erase_by_position(array, size, positions[0]);
        erase_by_position(positions, s, 0);
        for (long long i = 0; i < size; i++) {
            if (array[i] == value) {
                positions[k] = i;
                k++;
            }
        }
    }
}

/// @brief removing all elements of array with given value
/// @param array source array
/// @param size size of array
/// @param value removed value
void erase_all(double array[], long long& size, double value) {
    long long s = count(array, size, value);
    long long positions[s], k = 0;
    for (long long i = 0; i < size; i++) {
        if (array[i] == value) {
            positions[k] = i;
            k++;
        }
    }

    long long s1 = s;
    for (long long i = 0; i < s1; i++) {
        k = 0;
        erase_by_position(array, size, positions[0]);
        erase_by_position(positions, s, 0);
        for (long long i = 0; i < size; i++) {
            if (array[i] == value) {
                positions[k] = i;
                k++;
            }
        }
    }
}
