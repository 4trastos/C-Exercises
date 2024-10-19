//5. Write a program that reads the final grade of four students and calculates the final average grade of the four students.

#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    float result = 0.0;


    cout << "Enter the final grade of a => "; cin >> a;
    cout << "Enter the final grade of b => "; cin >> b;
    cout << "Enter the final grade of c => "; cin >> c;
    cout << "Enter the final grade of d => "; cin >> d;

    result = (a + b + c + d) / 4.0;

    cout.precision(2);
    cout << "The final average grade of the four students is: => " << fixed << result << endl;

	return (0);
}