#include <iostream>
#include "./lib/Bubble/Bubble.h"
#include "./lib/Quick/Quick.h"

using namespace std;

int main()
{
    std::cout << "Starting Array Sorting" << std::endl;

    // create a new array
    int N = 10;
    Bubble bubble(N);
    Quick quick(N);

    bubble.fillOrdered();
    quick.fillOrdered();
    cout << bubble.toString() << endl;
    cout << "Ordering..." << endl;
    bubble.sort();
    quick.sort();
    cout << bubble.toString() << endl;
    cout << quick.toString() << endl;
    cout << "--------------------------" << endl;

    bubble.fillReverseOrdered();
    quick.fillReverseOrdered();
    cout << bubble.toString() << endl;
    cout << "Ordering..." << endl;
    bubble.sort();
    quick.sort();
    cout << bubble.toString() << endl;
    cout << quick.toString() << endl;
    cout << "--------------------------" << endl;

    bubble.fillRandom(49429452);
    quick.fillRandom(49429452);
    cout << bubble.toString() << endl;
    cout << "Ordering..." << endl;
    bubble.sort();
    quick.sort();
    cout << bubble.toString() << endl;
    cout << quick.toString() << endl;
    cout << "--------------------------" << endl;

    return 0;
}