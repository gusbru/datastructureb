#ifndef __ARRAY_H_INCLUDED__
#define __ARRAY_H_INCLUDED__

#include <iostream>
#include <string>
#include <random>

class Array
{
  private:
    int length, nComparisons, nSwaps;
    int *array;

    //protected:
    //    int *array;

  public:
    Array(int length);

    ~Array();

    void fillRandom(unsigned int seed);

    void fillOrdered();

    void fillReverseOrdered();

    virtual void sort() = 0;

    void swapItems(int i, int j);

    void resetStatistics();

    void incrComparisons();

    void incrSwaps();

    int getItem(int index);

    int getLength();

    std::string toString();

    int getComparisons();

    int getSwaps();
};

#endif //__ARRAY_H_INCLUDED__