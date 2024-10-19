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
