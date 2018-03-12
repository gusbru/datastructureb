
#ifndef __BUBBLE_H_INCLUDED__
#define __BUBBLE_H_INCLUDED__

#include <iostream>
#include "../Array/Array.h"

class Bubble: public Array
{
public:
    Bubble(int N);
    ~Bubble();

    // sort function
    void sort();
    


};

#endif //__BUBBLE_H_INCLUDED__