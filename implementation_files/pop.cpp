#include "../arraymodule.hpp"
#include <iostream>

using namespace std;

/// @brief 
/// @param array source array
/// @param size size of array
/// @param position 
/// @return 
int pop(int array[], int& size, int position = -1) {
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