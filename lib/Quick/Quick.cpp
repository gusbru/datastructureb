#include "Quick.h"

// constructor
Quick::Quick(int N) : Array(N) {
  this->N = N;
}

void Quick::sort() {
  Quick::sort(0, this->N);
}

void Quick::sort(int esq, int dir)
{
  pivo = Array::getItem(int(esq + dir) / 2);
  i = esq;
  j = dir;

  while (Array::getItem(i) < pivo)
    i++;
  while (Array::getItem(j) > pivo)
    j--;

  if (i <= j)
  {
    Array::swapItems(i, j);
    i++;
    j--;
  }

  while (i <= j)
  {
    if (esq < j)
      Quick::sort(esq, j);
    if (dir > i)
      Quick::sort(i, dir);
  }
}