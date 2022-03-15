#include <iostream>
using namespace std;

int power(int base, int expo)
{
    if (expo != 0)
    {
        return (base * power(base, expo - 1));
    }
    else
    {
        return 1;
    }
}

int main()
{   
    int base, exponent;
    cout << "Type in your base" << endl;
    cin >> base;
    cout << "Type in your expotent" << endl;
    cin >> exponent;
    cout << (power(base, exponent));
    return 0;
}
