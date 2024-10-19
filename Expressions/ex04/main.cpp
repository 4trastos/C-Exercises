//6. A student's final grade is the weighted average of three standards: 
//the practical grade, which counts for 30% of the total, the theoretical
//grade, which counts for 60%, and the participation grade, which counts for the remaining 10%.
//Write a program that reads a student's three grades from the standard input and writes his final grade to the standard output..

#include <iostream>

using namespace std;

int main()
{
    float practicalGrade;
    float theoreticalGrade;
    float participationGrade;
    float result = 0.0;


    cout << "Enter the Practical Grade => "; cin >> practicalGrade;
    cout << "Enter the Theoretical Grade => "; cin >> theoreticalGrade;
    cout << "Enter the Participation Grade => "; cin >> participationGrade;

   /*  practicalGrade = (practicalGrade / 100) * 30;
    theoreticalGrade = (theoreticalGrade / 100) * 60;
    participationGrade = (participationGrade / 100) * 10;

    result = (practicalGrade) + (theoreticalGrade) + (participationGrade); */

    result = (practicalGrade * 0.30) + (theoreticalGrade * 0.60) + (participationGrade * 0.10);

    cout.precision(2);
    cout << "The final average grade of the four students is: => " << fixed << result << endl;

	return (0);
}