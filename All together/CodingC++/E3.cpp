#include<iostream>
using namespace std;

// Function to approximate the solution using Euler's method
void euler(double x, double y, double z, double h)
{
    // Looping over the range of x values
    for(x = 0; x <= 5; x += h)
    {
        // Print the current x, y (solution), and z (dy/dx) values
        cout << x << "\t" << y << "\t" << z << endl;

        // Store the current value of z (which is dy/dx)
        double z0 = z;

        // Update z using the Euler method formula applied to the second derivative
        // Here, z represents the first derivative (dy/dx), and we're updating it
        z = z + h * (x*x - 5*x + 1);  // This is the update for dy/dx based on the second derivative

        // Update y using the previous value of z (dy/dx)
        y = y + z0 * h;  // y is updated using the slope z0 (dy/dx) from the previous step
    }
}

int main()
{
    // Initial conditions: x = 0, y = 1 (initial y value), z = 0 (initial dy/dx value), step size h = 0.1
    euler(0, 1, 0, 0.1);

    return 0;
}
