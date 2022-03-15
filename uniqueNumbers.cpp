#include <iostream>
using namespace std;

int main()
{
    // initiate map of 101 i.e index 0 would be replace by 101 and set all to 0
    int map[101], n;
    for (int i = 0; i <= 100; i++)
    {
        map[i] = 0;
    }

    // input 20 numbers using for loop and set each number to 1 in the map
    for (int i = 1; i <= 5; i++)
    {
        cout << "Input a between 10 and 100: " << endl;
        cin >> n;
        map[n] = 1;
    }

    // print out all numbers in the map that are not equal to 0
    cout << "List of unique numbers" << endl;
    for (int i = 10; i <= 100; i++)
    {
        if (map[i] != 0)
        {
            cout << i << endl;
        }
    }
    return 0;
}
