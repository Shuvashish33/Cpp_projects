#include<iostream>
#include<fstream>  // For file handling, though not used in this version
#include<cmath>    // For mathematical functions (not used here, but might be useful in other cases)

using namespace std;

// Euler method function to approximate the solution
void euler(double x, double y, double h)
{
    // Looping over the range of x values
    for(x = 0; x <= 5; x += h)
    {
        // Print the current x and y values
        cout << x << "\t" << y << endl;

        // Update y using the Euler method formula
        y = y + h * (x*x + y); // The next value of y is calculated and stored back into y
    }
}

int main()
{
    // Call the euler function with initial values x0 = 0, y0 = 1, and step size h = 0.1
    euler(0, 1, 0.1);

    return 0;
}
