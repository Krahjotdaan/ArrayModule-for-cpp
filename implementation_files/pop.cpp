#include "../arraymodule.hpp"

using namespace std;

/// @brief removing element by index and returning it
/// @param array source array
/// @param size size of array
/// @param position index of removed element, by default -1
/// @return value of removed element, if position is default, function will erase and return last element of array
int pop(int array[], int& size, int position) {
    int result;
    if (position == -1) {
        result = array[size - 1];
        size--;
    }
    else {
        result = array[position];
        size--;
        for (int i = position; i < size; i++) {
            array[i] = array[i + 1];
        }
    }
    return result;
}

/// @brief removing element by index and returning it
/// @param array source array
/// @param size size of array
/// @param position index of removed element, by default -1
/// @return value of removed element, if position is default, function will erase and return last element of array
long long pop(long long array[], int& size, int position) {
    long long result;
    if (position == -1) {
        result = array[size - 1];
        size--;
    }
    else {
        result = array[position];
        size--;
        for (int i = position; i < size; i++) {
            array[i] = array[i + 1];
        }
    }
    return result;
}

/// @brief removing element by index and returning it
/// @param array source array
/// @param size size of array
/// @param position index of removed element, by default -1
/// @return value of removed element, if position is default, function will erase and return last element of array
float pop(float array[], int& size, int position) {
    float result;
    if (position == -1) {
        result = array[size - 1];
        size--;
    }
    else {
        result = array[position];
        size--;
        for (int i = position; i < size; i++) {
            array[i] = array[i + 1];
        }
    }
    return result;
}

/// @brief removing element by index and returning it
/// @param array source array
/// @param size size of array
/// @param position index of removed element, by default -1
/// @return value of removed element, if position is default, function will erase and return last element of array
double pop(double array[], int& size, int position) {
    double result;
    if (position == -1) {
        result = array[size - 1];
        size--;
    }
    else {
        result = array[position];
        size--;
        for (int i = position; i < size; i++) {
            array[i] = array[i + 1];
        }
    }
    return result;
}

/// @brief removing element by index and returning it
/// @param array source array
/// @param size size of array
/// @param position index of removed element, by default -1
/// @return value of removed element, if position is default, function will erase and return last element of array
int pop(int array[], int& size, int position) {
    int result;
    if (position == -1) {
        result = array[size - 1];
        size--;
    }
    else {
        result = array[position];
        size--;
        for (int i = position; i < size; i++) {
            array[i] = array[i + 1];
        }
    }
    return result;
}

/// @brief removing element by index and returning it
/// @param array source array
/// @param size size of array
/// @param position index of removed element, by default -1
/// @return value of removed element, if position is default, function will erase and return last element of array
long long pop(long long array[], long long& size, long long position) {
    long long result;
    if (position == -1) {
        result = array[size - 1];
        size--;
    }
    else {
        result = array[position];
        size--;
        for (long long i = position; i < size; i++) {
            array[i] = array[i + 1];
        }
    }
    return result;
}

/// @brief removing element by index and returning it
/// @param array source array
/// @param size size of array
/// @param position index of removed element, by default -1
/// @return value of removed element, if position is default, function will erase and return last element of array
float pop(float array[], long long& size, long long position) {
    float result;
    if (position == -1) {
        result = array[size - 1];
        size--;
    }
    else {
        result = array[position];
        size--;
        for (long long i = position; i < size; i++) {
            array[i] = array[i + 1];
        }
    }
    return result;
}

/// @brief removing element by index and returning it
/// @param array source array
/// @param size size of array
/// @param position index of removed element, by default -1
/// @return value of removed element, if position is default, function will erase and return last element of array
double pop(double array[], long long& size, long long position) {
    double result;
    if (position == -1) {
        result = array[size - 1];
        size--;
    }
    else {
        result = array[position];
        size--;
        for (long long i = position; i < size; i++) {
            array[i] = array[i + 1];
        }
    }
    return result;
}
