#include <iostream>
using namespace std;

int main ()
{
	double width, length, perimeter, area;

	cout << "This program will calculate the area and perimeter of \n";
	cout << "two shapes. Press return after each input.\n";
	
	cout << "Enter the width in yards: ";
	cin >> width;
	cout << "Enter the length in yards: ";
	cin >> length;

	perimeter = 2 * (length + width);
	area = length * width;

	cout << "The perimeter is " << perimeter << " yards and the area is " << area  //new code line
		<< " square yards.\n";
	return 0;
}