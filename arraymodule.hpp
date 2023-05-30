#pragma once
#include <fstream>
using namespace std;

void fill(int[], int, int);
void fill(long long[], int, long long);
void fill(float[], int, float);
void fill(double[], int, double);
void fill(int[], long long, int);
void fill(long long[], long long, long long);
void fill(float[], long long, float);
void fill(double[], long long, double);

void read(int[], int);
void read(long long[], int);
void read(float[], int);
void read(double[], int);
void read(int[], long long);
void read(long long[], long long);
void read(float[], long long);
void read(double[], long long);

void read(int[], int, ifstream&);
void read(long long[], int, ifstream&);
void read(float[], int, ifstream&);
void read(double[], int, ifstream&);
void read(int[], long long, ifstream&);
void read(long long[], long long, ifstream&);
void read(float[], long long, ifstream&);
void read(double[], long long, ifstream&);

void print(int[], int);
void print(long long[], int);
void print(float[], int);
void print(double[], int);
void print(int[], long long);
void print(long long[], long long);
void print(float[], long long);
void print(double[], long long);

void print(int[], int, ofstream&);
void print(long long[], int, ofstream&);
void print(float[], int, ofstream&);
void print(double[], int, ofstream&);
void print(int[], long long, ofstream&);
void print(long long[], long long, ofstream&);
void print(float[], long long, ofstream&);
void print(double[], long long, ofstream&);

int sum(int[], int);
long long sum(long long[], int);
float sum(float[], int);
double sum(double[], int);
int sum(int[], long long);
long long sum(long long[], long long);
float sum(float[], long long);
double sum(double[], long long);

int max(int[], int);
long long max(long long[], int);
float max(float[], int);
double max(double[], int);
int max(int[], long long);
long long max(long long[], long long);
float max(float[], long long);
double max(double[], long long);

int min(int[], int);
long long min(long long[], int);
float min(float[], int);
double min(double[], int);
int min(int[], long long);
long long min(long long[], long long);
float min(float[], long long);
double min(double[], long long);

void reverse(int[], int);
void reverse(long long[], int);
void reverse(float[], int);
void reverse(double[], int);
void reverse(int[], long long);
void reverse(long long[], long long);
void reverse(float[], long long);
void reverse(double[], long long);

int find(int[], int, int);
int find(long long[], int, long long);
int find(float[], int, float);
int find(double[], int, double);
long long find(int[], long long, int);
long long find(long long[], long long, long long);
long long find(float[], long long, float);
long long find(double[], long long, double);

void copy(int[], int, int[]);
void copy(long long[], int, long long[]);
void copy(float[], int, float[]);
void copy(double[], int, double[]);
void copy(int[], long long, int[]);
void copy(long long[], long long, long long[]);
void copy(float[], long long, float[]);
void copy(double[], long long, double[]);

void insert(int[], int&, int, int);
void insert(long long[], int&, int, long long);
void insert(float[], int&, int, float);
void insert(double[], int&, int, double);
void insert(int[], long long&, long long, int);
void insert(long long[], long long&, long long, long long);
void insert(float[], long long&, long long, float);
void insert(double[], long long&, long long, double);

void erase_by_position(int[], int&, int);
void erase_by_position(long long[], int&, int);
void erase_by_position(float[], int&, int);
void erase_by_position(double[], int&, int);
void erase_by_position(int[], long long&, long long);
void erase_by_position(long long[], long long&, long long);
void erase_by_position(float[], long long&, long long);
void erase_by_position(double[], long long&, long long);

void erase_by_value(int[], int&, int, int);
void erase_by_value(long long[], int&, long long, int);
void erase_by_value(float[], int&, float, int);
void erase_by_value(double[], int&, double, int);
void erase_by_value(int[], long long&, int, long long);
void erase_by_value(long long[], long long&, long long, long long);
void erase_by_value(float[], long long&, float, long long);
void erase_by_value(double[], long long&, double, long long);

int count(int[], int, int);
int count(long long[], int, long long);
int count(float[], int, float);
int count(double[], int, double);
long long count(int[], long long, int);
long long count(long long[], long long, long long);
long long count(float[], long long, float);
long long count(double[], long long, double);

bool is_equal(int[], int, int[], int);
bool is_equal(long long[], int, long long[], int);
bool is_equal(float[], int, float[], int);
bool is_equal(double[], int, double[], int);
bool is_equal(int[], long long, int[], long long);
bool is_equal(long long[], long long, long long[], long long);
bool is_equal(float[], long long, float[], long long);
bool is_equal(double[], long long, double[], long long);

void shift(int[], int, int);
void shift(long long[], int, int);
void shift(float[], int, int);
void shift(double[], int, int);
void shift(int[], long long, int);
void shift(long long[], long long, int);
void shift(float[], long long, int);
void shift(double[], long long, int);

void sort(int[], int);
void sort(long long[], int);
void sort(float[], int);
void sort(double[], int);
void sort(int[], long long);
void sort(long long[], long long);
void sort(float[], long long);
void sort(double[], long long);

void append(int[], int&, int);
void append(long long[], int&, long long);
void append(float[], int&, float);
void append(double[], int&, double);
void append(int[], long long&, int);
void append(long long[], long long&, long long);
void append(float[], long long&, float);
void append(double[], long long&, double);

void merge(int[], int&, int[], int);
void merge(long long[], int&, long long[], int);
void merge(float[], int&, float[], int);
void merge(double[], int&, double[], int);
void merge(int[], long long&, int[], long long);
void merge(long long[], long long&, long long[], long long);
void merge(float[], long long&, float[], long long);
void merge(double[], long long&, double[], long long);
