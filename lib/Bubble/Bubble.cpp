#include "Bubble.h"

// constructor
Bubble::Bubble(int N) {
    this->N = N;
    v = new int[N];
    this->switched = true;
}

// destructor
Bubble::~Bubble() {
    delete[] v;
}

// sort a vector v
void Bubble::sort() {
    for (int i = 0; i < (N - 1) && switched; ++i) {

        switched = false;

        for (int j = 0; j < (N - i - 1); ++j) {
            if (v[j] > v[j + 1]) {
                switched = true;
                tmp = v[j + 1];
                v[j + 1] = v[j];
                v[j] = tmp;
            }
        }
    }
}

void Bubble::sortNotEfficient() {
    for (int i = 0; i < (N - 1); ++i) {
        for (int j = 0; j < (N - 1); ++j) {
            if (v[j] > v[j + 1]) {
                tmp = v[j + 1];
                v[j + 1] = v[j];
                v[j] = tmp;
            }
        }
    }
}

// print the vector
void Bubble::printVector() {
    for (int i = 0; i < N; ++i) {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
}