#include<iostream>
#include<cmath>    // For mathematical functions

using namespace std;

// RK-2 method (Heun's Method) function to approximate the solution
void rk2(double x, double y, double h)
{
    double k1, k2;  // Variables to store the intermediate slopes

    // Looping over the range of x values
    for(x = 0; x <= 5; x += h)
    {
        // Print the current x and y values
        cout << x << "\t" << y << endl;

        // Compute the intermediate slopes using Heun's Method
        k1 = h * (x*x + y);                // Slope at the beginning of the interval
        k2 = h * ((x+h)*(x+h) + y + k1);   // Slope at the end of the interval

        // Update y using the Heun's method formula
        y = y + 0.5 * (k1 + k2);  // Average of the two slopes is used to update y
    }
}

int main()
{
    // Call the rk2 function with initial values x0 = 0, y0 = 1, and step size h = 0.1
    rk2(0, 1, 0.1);

    return 0;
}
