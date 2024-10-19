//7. Write a program that reads the two legs of a right triangle
//from standard input and writes its hypotenuse to standard output.

// Pitágoras: a2 + b2 = c2
//
//       _________
// c = \/ a2 + b2 

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float legsA;
    float legsB;
    float hypotenuse = 0.0;


    cout << "Enter the legsA => "; cin >> legsA;
    cout << "Enter the legsB => "; cin >> legsB;

    hypotenuse = (legsA * legsA) + (legsB * legsB);
    hypotenuse = sqrt(hypotenuse);

    cout.precision(2);
    cout << "The Hypotenuse is : => " << fixed << hypotenuse << endl;

	return (0);
}