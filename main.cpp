#include <iostream>
#include "./lib/Bubble/Bubble.h"

using namespace std;

int main() {
    std::cout << "Starting Array Sorting" << std::endl;

    // create a new array
    Bubble bubble(10);

    bubble.fillOrdered();
    cout << bubble.toString() << endl;
    cout << "Ordering..." << endl;
    bubble.sort();
    cout << bubble.toString() << endl;

    bubble.fillReverseOrdered();
    cout << bubble.toString() << endl;
    cout << "Ordering..." << endl;
    bubble.sort();
    cout << bubble.toString() << endl;

    bubble.fillRandom(49429452);
    cout << bubble.toString() << endl;
    cout << "Ordering..." << endl;
    bubble.sort();
    cout << bubble.toString() << endl;



    return 0;
}