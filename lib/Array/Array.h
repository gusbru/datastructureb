#ifndef __ARRAY_H_INCLUDED__
#define __ARRAY_H_INCLUDED__

class Array
{
private:
  int length, nComparisons, nSwaps;
  int *array;

public:
  Array(int length);
  ~Array();

  void addItem(int item);
  void fillRandom(int seed);
  void fillOrdered();
  void fillReverseOrdered();
  void sort();


};

#endif //__ARRAY_H_INCLUDED__