#include "arraymodule.h"

#include <iostream>
#include <fstream>

using namespace std;

void fill(int array[], int size, int item = 0) {
    for (int i = 0; i < size; i++) {
        array[i] = item;
    }
}


void read(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }
}


void read(int array[], int size, ifstream&) {
    ifstream file ("input.txt"); 
    for (int i = -1; i < size; i++) {
        file >> array[i];
    }
}


void print(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
}


void print(int array[], int size, ofstream&) {
    ofstream file("output.txt");
    for (int i = 0; i < size; i++) {
        file << array[i] << " ";
    }
}


int sum(int array[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
  return sum;
}


int max(int array[], int size) {
    int max = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}


int min(int array[], int size) {
    int min = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}


void reverse(int array[], int size) {
    int s = size - 1;
    for (int i = 0; i < size / 2; i++) {
        int tmp = array[i];
        array[i] = array[s];
        array[s] = tmp;
        s--;
    }
}


int find(int array[], int size, int item) {
    int s = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] == item) {
            s = i;
            break;
            return s;
        } 
        else {
            return NULL;
        }
    }
}


void copy(int array_a[], int size, int array_b[]) {
    for (int i = 0; i < size; i++) {
        array_b[i] = array_a[i];
    }
}


void insert(int array[], int& size, int position, int item) {
    size++;
    for (int i = size; i >= position; i--) {
        int tmp = array[i + 1];
        array[i + 1] = array[i];
        array[i + 2] = tmp;
    }
    array[position] = item;
}


void erase(int array[], int& size, int item) {
    size -= 1;
    for (int i = item; i < size; i++) {
        array[i] = array[i + 1];
    }
}


int count(int array[], int size, int item) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] == item) {
            count++;
        }
    }
    return count;
}


bool is_equal(int array_a[], int size_a, int array_b[], int size_b) {
    if (size_a == size_b) {
        for (int i = 0; i < size_a; i++) {
            if (array_a[i] != array_b[i]) {
                return false;
                break;
            }
        }
        return true;
    }
    else {
        return false;
    }
}


void sort(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1; j++) {
            if (array[j] > array[j + 1]) {
                swap(array[j], array[j + 1]);
            }
        }
    }
}


void rotate(int array[], int size, int item) {
    if (item > 0) {
        for (int i = 0; i < item; i++) {
            int tmp = array[size - 1];
            for (int j = size - 1; j >= 0; j--) {
                array[j + 1] = array[j];
            }
            array[0] = tmp;
        }
    }
    else if (item < 0) {
        for (int i = 0; i < item * -1; i++) {
            int tmp = array[0];
            for (int j = 0; j < size; j++) {
                array[j] = array[j + 1];
            }
            array[size - 1] = tmp;
        }
    }
}


void append(int array[], int& size, int item) {
    size++;
    array[size - 1] = item;
}
