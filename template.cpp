#include <iostream>
using namespace std;

// template Class

// template Function
template <class T>
T maximum(T value1, T value2)
{
    if (value1 > value2)
        return value1;
    else
        return value2;
}
