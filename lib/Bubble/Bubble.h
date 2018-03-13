
#ifndef __BUBBLE_H_INCLUDED__
#define __BUBBLE_H_INCLUDED__

#include <iostream>
#include "../Array/Array.h"

class Bubble : public Array {
private:
    bool switched;
    int N;

public:
    Bubble(int length);

    // sort function
    void sort() override;


};

#endif //__BUBBLE_H_INCLUDED__