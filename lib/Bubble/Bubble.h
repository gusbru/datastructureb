
#ifndef __BUBBLE_H_INCLUDED__
#define __BUBBLE_H_INCLUDED__

class Bubble
{
public:
  Bubble(int N);
  ~Bubble();

  // sort function
  void sort();
  void printVector();

private:
  int *v;
  int N, tmp;
};

#endif __BUBBLE_H_INCLUDED__