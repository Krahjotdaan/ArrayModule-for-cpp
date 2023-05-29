#include "arraymodule.hpp"
#include <iostream>
#include <fstream>

using namespace std;

//
void fill(int array[], int size, int item = 0) {
    for (int i = 0; i < size; i++) {
        array[i] = item;
    }
}

void fill(long long array[], int size, long long item = 0) {
    for (int i = 0; i < size; i++) {
        array[i] = item;
    }
}

void fill(float array[], int size, float item = 0) {
    for (int i = 0; i < size; i++) {
        array[i] = item;
    }
}

void fill(double array[], int size, double item = 0) {
    for (int i = 0; i < size; i++) {
        array[i] = item;
    }
}

//
void read(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }
}

void read(long long array[], int size) {
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }
}

void read(float array[], int size) {
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }
}

void read(double array[], int size) {
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }
}

//
void read(int array[], int size, ifstream&) {
    ifstream file ("input.txt"); 
    for (int i = -1; i < size; i++) {
        file >> array[i];
    }
}

void read(long long array[], int size, ifstream&) {
    ifstream file ("input.txt"); 
    for (int i = -1; i < size; i++) {
        file >> array[i];
    }
}

void read(float array[], int size, ifstream&) {
    ifstream file ("input.txt"); 
    for (int i = -1; i < size; i++) {
        file >> array[i];
    }
}

void read(double array[], int size, ifstream&) {
    ifstream file ("input.txt"); 
    for (int i = -1; i < size; i++) {
        file >> array[i];
    }
}

//
void print(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";
}

void print(long long array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";
}

void print(float array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";
}

void print(double array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";
}

//
void print(int array[], int size, ofstream&) {
    ofstream file("output.txt");
    for (int i = 0; i < size; i++) {
        file << array[i] << " ";
    }
    file << "\n";
}

void print(long long array[], int size, ofstream&) {
    ofstream file("output.txt");
    for (int i = 0; i < size; i++) {
        file << array[i] << " ";
    }
    file << "\n";
}

void print(float array[], int size, ofstream&) {
    ofstream file("output.txt");
    for (int i = 0; i < size; i++) {
        file << array[i] << " ";
    }
    file << "\n";
}

void print(double array[], int size, ofstream&) {
    ofstream file("output.txt");
    for (int i = 0; i < size; i++) {
        file << array[i] << " ";
    }
    file << "\n";
}

//
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

//
int max(int array[], int size) {
    int max = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

long long max(long long array[], int size) {
    long long max = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

float max(float array[], int size) {
    float max = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

double max(double array[], int size) {
    double max = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

//
int min(int array[], int size) {
    int min = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

long long min(long long array[], int size) {
    long long min = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

float min(float array[], int size) {
    float min = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

double min(double array[], int size) {
    double min = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

//
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

//
int find(int array[], int size, int item) {
    int s = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] == item) {
            s = i;
            break;
            return s;
        } 
        else {
            return -1;
        }
    }
}

int find(long long array[], int size, long long item) {
    int s = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] == item) {
            s = i;
            break;
            return s;
        } 
        else {
            return -1;
        }
    }
}

int find(float array[], int size, float item) {
    int s = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] == item) {
            s = i;
            break;
            return s;
        } 
        else {
            return -1;
        }
    }
}

int find(double array[], int size, double item) {
    int s = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] == item) {
            s = i;
            break;
            return s;
        } 
        else {
            return -1;
        }
    }
}

//
void copy(int array_a[], int size, int array_b[]) {
    for (int i = 0; i < size; i++) {
        array_b[i] = array_a[i];
    }
}

void copy(long long array_a[], int size, long long array_b[]) {
    for (int i = 0; i < size; i++) {
        array_b[i] = array_a[i];
    }
}

void copy(float array_a[], int size, float array_b[]) {
    for (int i = 0; i < size; i++) {
        array_b[i] = array_a[i];
    }
}

void copy(double array_a[], int size, double array_b[]) {
    for (int i = 0; i < size; i++) {
        array_b[i] = array_a[i];
    }
}

//
void insert(int array[], int& size, int position, int item) {
    size++;
    for (int i = size; i >= position; i--) {
        int tmp = array[i + 1];
        array[i + 1] = array[i];
        array[i + 2] = tmp;
    }
    array[position] = item;
}

void insert(long long array[], int& size, int position, long long item) {
    size++;
    for (int i = size; i >= position; i--) {
        long long tmp = array[i + 1];
        array[i + 1] = array[i];
        array[i + 2] = tmp;
    }
    array[position] = item;
}

void insert(float array[], int& size, int position, float item) {
    size++;
    for (int i = size; i >= position; i--) {
        float tmp = array[i + 1];
        array[i + 1] = array[i];
        array[i + 2] = tmp;
    }
    array[position] = item;
}

void insert(double array[], int& size, int position, double item) {
    size++;
    for (int i = size; i >= position; i--) {
        double tmp = array[i + 1];
        array[i + 1] = array[i];
        array[i + 2] = tmp;
    }
    array[position] = item;
}

//
void erase(int array[], int& size, int position) {
    size -= 1;
    for (int i = position; i < size; i++) {
        array[i] = array[i + 1];
    }
}

void erase(long long array[], int& size, int position) {
    size -= 1;
    for (int i = position; i < size; i++) {
        array[i] = array[i + 1];
    }
}

void erase(float array[], int& size, int position) {
    size -= 1;
    for (int i = position; i < size; i++) {
        array[i] = array[i + 1];
    }
}

void erase(double array[], int& size, int position) {
    size -= 1;
    for (int i = position; i < size; i++) {
        array[i] = array[i + 1];
    }
}

//
int count(int array[], int size, int item) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] == item) {
            count++;
        }
    }
    return count;
}

int count(long long array[], int size, long long item) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] == item) {
            count++;
        }
    }
    return count;
}

int count(float array[], int size, float item) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] == item) {
            count++;
        }
    }
    return count;
}

int count(double array[], int size, double item) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] == item) {
            count++;
        }
    }
    return count;
}

//
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

bool is_equal(long long array_a[], int size_a, long long array_b[], int size_b) {
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

bool is_equal(float array_a[], int size_a, float array_b[], int size_b) {
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

bool is_equal(double array_a[], int size_a, double array_b[], int size_b) {
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

//
void sort(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1; j++) {
            if (array[j] > array[j + 1]) {
                swap(array[j], array[j + 1]);
            }
        }
    }
}

void sort(long long array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1; j++) {
            if (array[j] > array[j + 1]) {
                swap(array[j], array[j + 1]);
            }
        }
    }
}

void sort(float array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1; j++) {
            if (array[j] > array[j + 1]) {
                swap(array[j], array[j + 1]);
            }
        }
    }
}

void sort(double array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1; j++) {
            if (array[j] > array[j + 1]) {
                swap(array[j], array[j + 1]);
            }
        }
    }
}

//
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

void shift(long long array[], int size, long long value) {
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

void shift(float array[], int size, float value) {
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

void shift(double array[], int size, double value) {
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

//
void append(int array[], int& size, int item) {
    size++;
    array[size - 1] = item;
}

void append(long long array[], int& size, long long item) {
    size++;
    array[size - 1] = item;
}

void append(float array[], int& size, float item) {
    size++;
    array[size - 1] = item;
}

void append(double array[], int& size, double item) {
    size++;
    array[size - 1] = item;
}

//
void merge(int array_a[], int& size_a, int array_b[], int size_b) {
    int tmp = size_a;
    size_a += size_b;
    int k = 0;
    for (int i = tmp; i < size_a; i++) {
        array_a[i] = array_b[k];
        k++;
    }
}

void merge(long long array_a[], int& size_a, long long array_b[], int size_b) {
    int tmp = size_a;
    size_a += size_b;
    int k = 0;
    for (int i = tmp; i < size_a; i++) {
        array_a[i] = array_b[k];
        k++;
    }
}

void merge(float array_a[], int& size_a, float array_b[], int size_b) {
    int tmp = size_a;
    size_a += size_b;
    int k = 0;
    for (int i = tmp; i < size_a; i++) {
        array_a[i] = array_b[k];
        k++;
    }
}

void merge(double array_a[], int& size_a, double array_b[], int size_b) {
    int tmp = size_a;
    size_a += size_b;
    int k = 0;
    for (int i = tmp; i < size_a; i++) {
        array_a[i] = array_b[k];
        k++;
    }
}
