#include "Quick.h"

// constructor
Quick::Quick(int N) : Array(N)
{
  this->N = N;
}

void Quick::sort()
{
  Array::resetStatistics();
  Quick::sort(0, this->N);
}

void Quick::sort(int esq, int dir)
{
  pivo = Array::getItem(int(esq + dir) / 2);
  i = esq;
  j = dir;

  do
  {
    while (Array::getItem(i) < pivo)
    {
      i++;
      Array::incrComparisons();
    }

    while (Array::getItem(j) > pivo)
    {
      j--;
      Array::incrComparisons();
    }

    if (i <= j)
    {
      Array::swapItems(i, j);
      Array::incrSwaps();
      i++;
      j--;
    }
  } while (i <= j);

  if (esq < j)
    Quick::sort(esq, j);
  if (dir > i)
    Quick::sort(i, dir);
}