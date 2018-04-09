#include <iostream>
#include "./lib/Bubble/Bubble.h"
#include "./lib/Quick/Quick.h"
#include "./lib/Selection/Selection.h"
#include "./lib/Insertion/Insertion.h"

using namespace std;

int main()
{
    std::cout << "Starting Array Sorting" << std::endl;

    // create a new array
    int N = 10;
    Bubble bubble(N);
    Quick quick(N);
    Selection selection(N);
    Insertion insertion(N);

    cout << "----------ORDERED----------" << endl;
    bubble.fillOrdered();
    quick.fillOrdered();
    selection.fillOrdered();
    insertion.fillOrdered();
    cout << bubble.toString() << endl;
    cout << "--------------------------" << endl;
    cout << "Ordering..." << endl;
    bubble.sort();
    quick.sort();
    selection.sort();
    insertion.sort();
    cout << bubble.toString() << endl;
    cout << quick.toString() << endl;
    cout << selection.toString() << endl;
    cout << insertion.toString() << endl;
    cout << "--------------------------" << endl;

    cout << "------REVERSE-ORDERED-----" << endl;
    bubble.fillReverseOrdered();
    quick.fillReverseOrdered();
    selection.fillReverseOrdered();
    insertion.fillReverseOrdered();
    cout << bubble.toString() << endl;
    cout << "--------------------------" << endl;
    cout << "Ordering..." << endl;
    bubble.sort();
    quick.sort();
    selection.sort();
    insertion.sort();
    cout << bubble.toString() << endl;
    cout << quick.toString() << endl;
    cout << selection.toString() << endl;
    cout << insertion.toString() << endl;
    cout << "--------------------------" << endl;

    cout << "----------RANDOM----------" << endl;
    int seed = 49429452;
    bubble.fillRandom(seed);
    quick.fillRandom(seed);
    selection.fillRandom(seed);
    insertion.fillRandom(seed);
    cout << bubble.toString() << endl;
    cout << "--------------------------" << endl;
    cout << "Ordering..." << endl;
    bubble.sort();
    quick.sort();
    selection.sort();
    insertion.sort();
    cout << bubble.toString() << endl;
    cout << quick.toString() << endl;
    cout << selection.toString() << endl;
    cout << insertion.toString() << endl;
    cout << "--------------------------" << endl;

    return 0;
}