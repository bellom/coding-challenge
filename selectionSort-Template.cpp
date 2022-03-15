#include <iostream>
using namespace std;

template <typename T>
void getArray(T array, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
}

template <typename T>
void sortArray(T array, int n)
{
    int minValue;
    for (int i = 0; i < n - 1; i++)
    {
        minValue = i;
        for (int j = i + 1; j < n; j++)
        {
            if (array[j] < array[minValue])
            {
                minValue = j;
            }
        }
        swap(array[minValue], array[i]);
    }
}

template <typename T>
void displayArray(T array, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " " << endl;
    }
}

int main(){
    int numInteger, numFloat;
    cout << "Enter the length of integer your array:" << endl;
    cin >> numInteger;
    int array[numInteger];
    cout << "Enter the values of your integer array with space, (e.g 3 4 5 6)" << endl;
    getArray(array, numInteger);
    sortArray(array, numInteger);
    cout << "List of Integer Sorted Array: " << endl;
    displayArray(array, numInteger);

    cout << "Enter the length of Float array" << endl;
    cin >> numFloat;
    float arrayF[numFloat];
    cout << "Enter the values of your flaot array with space, (e.g 2.5 3.5 4.5 5.5)" << endl;
    getArray(arrayF, numFloat);
    sortArray(arrayF, numFloat);
    cout << "List of Float Sorted Array: " << endl;
    displayArray(arrayF, numFloat);

    cout << "End of program, Goodbye!.......";

    return 0;
}