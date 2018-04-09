/** Bubble Sort.
 * 
 * Compare the neighbors and swap then when necessary.
 * 
 */

#ifndef __BUBBLE_H_INCLUDED__
#define __BUBBLE_H_INCLUDED__

#include "../Array/Array.h"

class Bubble : public Array
{
  private:
    bool switched;
    int N;

  public:
    Bubble(int length);

    // sort function
    void sort() override;
    void sortNoopt();
};

#endif //__BUBBLE_H_INCLUDED__