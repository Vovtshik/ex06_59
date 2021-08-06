/*ex06_59.cpp*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "ex06_59.h"

int main()
{
   int int1, int2;

   cout << "Input two integer values: ";
   cin >> int1 >> int2;

   cout << "The maximum integer value is: "
	<< min(int1, int2) << endl << endl;

   double double1, double2;

   cout << "Input two double values: ";
   cin >> double1 >> double2;

   cout << "The maximum double value is: "
	<< min(double1, double2) << endl << endl;
   
   char char1, char2;

   cout << "Input two char value: ";
   cin >> char1 >> char2;

   cout << "The maximum char value is: "
	<< min(char1, char2) << endl << endl;

   return 0;
}
