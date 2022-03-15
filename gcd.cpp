#include <iostream>
using namespace std;

int gcd(int x, int y)
{
    if (y == 0)
    {
        return x;
    }
    else if (x < y)
    {
        cout << ("Re-enter the second number, it must be less than the first number: ");
        cin >> y;
        return gcd(x, y);
    }
    else
    {
        return gcd(y, y % x);
    }
}

int main()
{
    int x, y, result;
    printf("Note: first number most be greater then the second number\n");
    cout << ("Enter first number") << endl;
    cin >> x;
    cout << ("Enter second number") << endl;
    cin >> y;
    result = gcd(x, y);
    cout << ("The GCD is: ") << result << endl;
    return 0;
}