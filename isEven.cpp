#include<iostream>
using namespace std;

int isEven(int num){
    if ( num % 2 == 0)
        cout << num << " is even" << endl;
    else 
        cout << num << " is odd" << endl;
    return 0;
}

int main(){
    int num;
    cout << "Enter an interger: ";
    cin >> num;
    isEven(num);
}