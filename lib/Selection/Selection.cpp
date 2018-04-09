#include "Selection.h"

Selection::Selection(int N) : Array(N)
{
  this->N = N;
}

void Selection::sort()
{
  Array::resetStatistics();
  for (int i = 0; i < N - 1; ++i)
  {
    minIdx = i;

    // loop to find the minimum element
    for (int j = i + 1; j < N; ++j)
    {
      Array::incrComparisons();
      if (Array::getItem(j) < Array::getItem(minIdx))
        minIdx = j;
    }

    // swap the position
    if (minIdx != i)
    {
      Array::swapItems(i, minIdx);
      Array::incrSwaps();
    }
  }
}