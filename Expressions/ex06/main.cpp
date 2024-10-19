//8. Write a program that calculates the value that the following
//function takes for given values ​​of x, y;

//              ___
//            \/ x
// f(x,y) = ---------
//            y2 - 1

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float x, y;
    float result = 0.0;

    cout << "Enter the value of x => "; cin >> x;
    cout << "Enter the value of y => "; cin >> y;

    /* y *= y;
    result = (sqrt(x)) / (y - 1); */

    result = (sqrt(x)) / (pow(y, 2) - 1);

    cout.precision(2);
    cout << "The result is : => " << fixed << result << endl;

	return (0);
}