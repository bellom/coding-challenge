#include <iostream>
using namespace std;

// template Class
template <class T>
T maximum(T value1, T value2)
{
    if (value1 > value2)
        return value1;
    else
        return value2;
}

// template Function
template <typename T>
T add(T num1, T num2)
{
    return (num1 + num2);
}