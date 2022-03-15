#include <iostream>
using namespace std;

template <typename T>
int printArray(T const * array, int count, int lowSubscript, int highSubscript)
{
    if (highSubscript > count || highSubscript <= lowSubscript)
        return 0;
    count = 0;
    for (int i = lowSubscript; i < highSubscript; i++)
    {
        count++;
        cout << array[i] << " ";
    }
    cout << endl;
    return count;
}

int main()
{
    const int aCount = 5;
    const int bCount = 7;
    const int cCount = 6;

    int a[aCount] = {1, 2, 3, 4, 5};
    float b[bCount] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};
    char c[cCount] = "HELLO";

    cout << "Array a contains: " << endl;
    printArray(a, aCount, 2, 4);

    cout << "Array b contains: " << endl;
    printArray(b, bCount, 3, 5);

    cout << "Array c contains: " << endl;
    printArray(c, cCount, 2, 4);

    return 0;
}
