#include <iostream>
using namespace std;

int guessNumber(int num)
{
    int randNum = 1 + (rand() % 1000);
    cout << randNum << endl;
    if (num == randNum)
    {
        cout << "Congratulations. You guessed the number!" << endl;
        cout << "Would you like to play again (y or n)?" << endl;
        char answer;
        cin >> answer;
        if (answer == 'y')
        {
            cout << ("Please type your guess again....") << endl;
            cin >> num;
            guessNumber(num);
        }
        else
        {
            cout << "Good Bye!" << endl;
        }
    }
    else if (num < randNum)
    {
        cout << "Too low. Try again.\nCan you guess my number again?" << endl;
        cin >> num;
        guessNumber(num);
    }
    else
    {
        cout << "Too high. Try again.\nCan you guess my number again?" << endl;
        cin >> num;
        guessNumber(num);
    }
    return 0;
}

int main()
{
    int num;
    printf("Welcome to Guess the Number Game!\n");
    printf("I have a number between 1 and 1000.\nCan you guess my number?\n");
    cout << ("Please type your first guess.") << endl;
    cin >> num;
    guessNumber(num);
}