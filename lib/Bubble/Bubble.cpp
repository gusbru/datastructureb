#include "Bubble.h"

// constructor
Bubble::Bubble(int length) : Array(length)
{
    this->N = length;
}

// optimized sort
void Bubble::sort()
{
    this->switched = true;
    Array::resetStatistics();

    for (int i = 0; i < (N - 1) && switched; ++i)
    {

        this->switched = false;

        for (int j = 0; j < (N - i - 1); ++j)
        {
            Array::incrComparisons();

            if (Array::getItem(j) > Array::getItem(j + 1))
            {
                this->switched = true;
                Array::swapItems(j, j + 1);
                Array::incrSwaps();
            }
        }
    }
}

// not optimized sort
void Bubble::sortNoopt()
{
    Array::resetStatistics();
    for (int i = 0; i < (N - 1); ++i)
    {
        for (int j = 0; j < (N - i - 1); ++j)
        {
            Array::incrComparisons();
            if (Array::getItem(j) > Array::getItem(j + 1))
            {
                Array::swapItems(j, j + 1);
                Array::incrSwaps();
            }
        }
    }
}