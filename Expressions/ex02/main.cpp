//4. Write a program fragment that exchanges the values ​​of two variables.

#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int temp;

    cout << "Enter the value of a => "; cin >> a;
    cout << "Enter the value of b => "; cin >> b;

    temp = a;
    a = b;
    b = temp;

    cout << "The value of a is: => " << a << endl;
    cout << "The value of b is: => " << b << endl;

	return (0);
}