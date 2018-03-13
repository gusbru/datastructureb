#include "Bubble.h"

// constructor
Bubble::Bubble(int length) : Array(length) {
    this->N = length;
}

// sort
void Bubble::sort() {
    this->switched = true;
    Array::resetStatistics();

    for (int i = 0; i < (N - 1) && switched; ++i) {

        switched = false;

        for (int j = 0; j < (N - i - 1); ++j) {
            Array::incrComparisons();

            if (Array::getItem(j) > Array::getItem(j + 1)) {
                switched = true;
                Array::swapItems(j, j + 1);
                Array::incrSwaps();
            }
        }
    }
}