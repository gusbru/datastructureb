#include <iostream>
#include "./lib/Bubble/Bubble.h"
#include "./lib/Quick/Quick.h"
#include "./lib/Selection/Selection.h"

using namespace std;

int main()
{
    std::cout << "Starting Array Sorting" << std::endl;

    // create a new array
    int N = 10;
    Bubble bubble(N);
    Quick quick(N);
    Selection selection(N);


    cout << "----------ORDERED----------" << endl;
    bubble.fillOrdered();
    quick.fillOrdered();
    selection.fillOrdered();
    cout << bubble.toString() << endl;
    cout << "--------------------------" << endl;
    cout << "Ordering..." << endl;
    bubble.sort();
    quick.sort();
    selection.sort();
    cout << bubble.toString() << endl;
    cout << quick.toString() << endl;
    cout << selection.toString() << endl;
    cout << "--------------------------" << endl;

    cout << "------REVERSE-ORDERED-----" << endl;
    bubble.fillReverseOrdered();
    quick.fillReverseOrdered();
    selection.fillReverseOrdered();
    cout << bubble.toString() << endl;
    cout << "--------------------------" << endl;
    cout << "Ordering..." << endl;
    bubble.sort();
    quick.sort();
    selection.sort();
    cout << bubble.toString() << endl;
    cout << quick.toString() << endl;
    cout << selection.toString() << endl;
    cout << "--------------------------" << endl;

    cout << "----------RANDOM----------" << endl;
    bubble.fillRandom(49429452);
    quick.fillRandom(49429452);
    selection.fillRandom(49429452);
    cout << bubble.toString() << endl;
    cout << "--------------------------" << endl;
    cout << "Ordering..." << endl;
    bubble.sort();
    quick.sort();
    selection.sort();
    cout << bubble.toString() << endl;
    cout << quick.toString() << endl;
    cout << selection.toString() << endl;
    cout << "--------------------------" << endl;

    return 0;
}