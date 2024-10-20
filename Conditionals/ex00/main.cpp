#include <iostream>

using namespace std;

int main()
{
    int number;
    int data = 0;

    cout << "Insert a number: "; cin >> number;

    if (number == 5)
    {
        cout << "Perfect, it's number 5" << endl;
    }
    else
    {
        cout << "Error: The number is different than 5" << endl;
    }

    return (0);
}
