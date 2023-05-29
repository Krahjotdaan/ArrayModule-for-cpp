#pragma once
#include <fstream>
using namespace std;

void fill(int[], int, int);
void fill(long long[], int, long long);
void fill(float[], int, float);
void fill(double[], int, double);

void read(int[], int);
void read(long long[], int);
void read(float[], int);
void read(double[], int);

void read(int[], int, ifstream&);
void read(long long[], int, ifstream&);
void read(float[], int, ifstream&);
void read(double[], int, ifstream&);

void print(int[], int);
void print(long long[], int);
void print(float[], int);
void print(double[], int);

void print(int[], int, ofstream&);
void print(long long[], int, ofstream&);
void print(float[], int, ofstream&);
void print(double[], int, ofstream&);

int sum(int[], int);
long long sum(long long[], int);
float sum(float[], int);
double sum(double[], int);

int max(int[], int);
long long max(long long[], int);
float max(float[], int);
double max(double[], int);

int min(int[], int);
long long min(long long[], int);
float min(float[], int);
double min(double[], int);

void reverse(int[], int);
void reverse(long long[], int);
void reverse(float[], int);
void reverse(double[], int);

int find(int[], int, int);
int find(long long[], int, long long);
int find(float[], int, float);
int find(double[], int, double);

void copy(int[], int, int[]);
void copy(long long[], int, long long[]);
void copy(float[], int, float[]);
void copy(double[], int, double[]);

void insert(int[], int&, int, int);
void insert(long long[], int&, int, long long);
void insert(float[], int&, int, float);
void insert(double[], int&, int, double);

void erase(int[], int&, int);
void erase(long long[], int&, int);
void erase(float[], int&, int);
void erase(double[], int&, int);

int count(int[], int, int);
int count(long long[], int, long long);
int count(float[], int, float);
int count(double[], int, double);

bool is_equal(int[], int, int[], int);
bool is_equal(long long[], int, long long[], int);
bool is_equal(float[], int, float[], int);
bool is_equal(double[], int, double[], int);

void shift(int[], int, int);
void shift(long long[], int, int);
void shift(float[], int, int);
void shift(double[], int, int);

void sort(int[], int);
void sort(long long[], int);
void sort(float[], int);
void sort(double[], int);

void append(int[], int&, int);
void append(long long[], int&, long long);
void append(float[], int&, float);
void append(double[], int&, double);

void merge(int[], int&, int[], int);
void merge(long long[], int&, long long[], int);
void merge(float[], int&, float[], int);
void merge(double[], int&, double[], int);
