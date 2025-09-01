#include<iostream>
#include<fstream>  // For file handling
using namespace std;

// Function to calculate dy/dx = f(x, y) = x^2 + y
float f(float x, float y)
{
    return (x*x + y);
}

int main()
{
    // Initial conditions and constants
    float x = 0, y = 1, h = 0.1; 

    // Print the title of the table
    cout << "\t n \t x \t y(n+1)\n";  // Table title
    
    // Print the initial condition before starting the loop
    cout << "\t 0 \t" << x << "\t" << y << endl;

    // Loop for the number of iterations
    for(int i = 1; i <= 30; i++)
    {
        float ynext = y + h * f(x, y);  // Euler's method formula

        // Print the updated values to the console
        cout << "\t" << i << "\t" << x + h << "\t" << ynext << endl;

        // Update y and x to the next values
        y = ynext;  // Correct update of y
        x = x + h;  // Update x to the next value
    }

    return 0;
}
    