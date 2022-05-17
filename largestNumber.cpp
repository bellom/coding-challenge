#include <iostream>
using namespace std;

int findMax(int arr[], int size)
{

    int max = arr[0];

    for (int i = 0; i < size; i++)
    {

        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

int main()
{
    int arr[] = {5, 30, 15, 50, 48, 42, 66, 23, 13, 88};

    int arrSize = sizeof(arr) / sizeof(arr[0]);

    if (arrSize > 0)
    {
        cout << "Largest number is: " << findMax(arr, 10) << endl;
    }
    else
    {
        cout << "The size of the array is empty!" << endl;
    }

    return 0;
}

// The time complexity of the given algorithm of finding the largest element in an unsorted array is O(n), where n is the array size.