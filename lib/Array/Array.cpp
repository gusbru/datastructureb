#include "Array.h"

Array::Array(int length)
{
    this->nComparisons = 0;
    this->nSwaps = 0;

    this->length = length;

    this->array = new int[this->length];

    std::cout << "New Array Created with " << this->length << " elements" << std::endl;
}

Array::~Array()
{
    delete[] array;
    std::cout << "Removing the array" << std::endl;
}

std::string Array::toString()
{
    std::string str;

    for (int i = 0; i < this->length; ++i)
    {
        str += std::to_string(this->array[i]) + " ";
    }

    return str;
}

int Array::getLength()
{
    return this->length;
}

void Array::fillOrdered()
{
    for (int i = 0; i < this->length; ++i)
    {
        this->array[i] = i;
    }
}

void Array::fillReverseOrdered()
{
    int count = this->length - 1;
    for (int i = 0; i < this->length; ++i)
    {
        this->array[i] = count;
        count--;
    }
}

void Array::fillRandom(unsigned int seed)
{
    auto mt_rand = std::bind(std::uniform_int_distribution<int>(0, this->length), std::mt19937(seed));

    for (int i = 0; i < this->length; ++i)
    {
        this->array[i] = mt_rand();
    }
}

void Array::swapItems(int i, int j)
{
    int tmp;
    tmp = this->array[i];
    this->array[i] = this->array[j];
    this->array[j] = tmp;
    this->incrSwaps();
}

int Array::getItem(int index)
{
    return this->array[index];
}

void Array::resetStatistics()
{
    this->nComparisons = 0;
    this->nSwaps = 0;
}

void Array::incrComparisons()
{
    this->nComparisons++;
}

void Array::incrSwaps()
{
    this->nSwaps++;
}

int Array::getComparisons()
{
    return this->nComparisons;
}

int Array::getSwaps()
{
    return this->nSwaps;
}

void Array::setItem(int index, int item)
{
    array[index] = item;
}