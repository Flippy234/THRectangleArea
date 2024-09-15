// Rectangle Area Assignment
// Tyler Hanson

#include <iostream>
#include <conio.h>

using namespace std; 

// calculate area
int CalculateArea(int length, int area)
{
	return length * area;
}

int main() 
{
// Declare variables
int length = 0; // prompt user to input a length
int width = 0; // Prompt user to input a width
int area = 0; // Displays the area to the user

do {
    cout << "Type a non-negative number for the length of your rectangle: ";
    cin >> length;

    if (length < 0) {
        cout << "Length cannot be negative. Please enter a non-negative value.\n";
    }
} while (length < 0);  // Repeat if the user enters a negative number

do {
    cout << "Type a non-negative number for the width of your rectangle: ";
    cin >> width;

    if (width < 0) {
        cout << "Width cannot be negative. Please enter a non-negative value.\n";
    }
} while (width < 0);  // Repeat if the user enters a negative number


// Calculate the Area of the rectangle given what the user inputted for length and width
area = CalculateArea(length, width);

// Display results of area of rectangle
cout << "The area of your rectangle is: " << area << " units squared" << "\n";

	(void)_getch();
	return 0;
}