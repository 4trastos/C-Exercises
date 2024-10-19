//2. Write the following expression as a C++ expression

//            b
// d =  a + ------
//          c - d

#include <iostream>

using namespace std;

int main()
{
	float a, b, c, d;
	float result = 0;

	cout << "Enter the value of a => "; cin >> a;
	cout << "Enter the value of b => "; cin >> b;
	cout << "Enter the value of c => "; cin >> c;
	cout << "Enter the value of d => "; cin >> d;

	result = a + (b / (c - d));
    if (c == d)
    {
        cout << "Error: Division by zero" << endl;
        return (1);
    }
	
	cout.precision(2);

	cout << "The result is : " << result << endl;

	return (0);
}