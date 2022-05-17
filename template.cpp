#include <iostream>
using namespace std;

// Ex 1: template Function
template <class T>
T maximum(T value1, T value2)
{
    if (value1 > value2)
        return value1;
    else
        return value2;
}

// Ex 2: template Function
template <typename T>
T add(T num1, T num2)
{
    return (num1 + num2);
}

int main()
{
    int result, result2;
    result = add<int>(3, 5);
    cout << result << endl;
    result2 = maximum<int>(3, 5);
    cout << result2 << endl;
    return 0;
}