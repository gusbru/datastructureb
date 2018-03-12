#include "Array.h"

Array::Array(int length)
{
  this->nComparisons = 0;
  this->nSwaps = 0;

  this->length = length;
  
  this->array = new int[this->length];
}

Array::~Array()
{
  delete this->array;
}

