#include "Insertion.h"

Insertion::Insertion(int N) : Array(N)
{
  this->N = N;
}

void Insertion::sort()
{
  Array::resetStatistics();
  for (i = 1; i < N; ++i)
  {
    key = Array::getItem(i);
    j = i - 1;

    while (j >= 0 && Array::getItem(j) > key)
    {
      Array::setItem(j + 1, Array::getItem(j));
      Array::incrComparisons();
      Array::incrSwaps();
      j = j - 1;
    }
    Array::setItem(j + 1, key);
  }
}