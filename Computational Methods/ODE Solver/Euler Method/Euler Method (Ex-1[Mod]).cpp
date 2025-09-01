#include<iostream>
using namespace std;

// Function to calculate dy/dx = f(x, y) = xy
float f(float x, float y)
{
    return (x * y);
}

int main()
{
    float x=1,y=1,h=0.01,ynext;
    // Print the title of the table
    cout << "\t Simple Euler's Method " << endl;
    cout << "\t dy/dx = f(x,y) = xy" << endl;

    // Creating the table's title (1st row)
    cout << "\n\t n \t x \t y(n+1)";
    cout << "\n----------------------------------------";

    // Loop for the number of iterations
    for(int i = 1; i <= 3; i++)
    {
        float ynext = y + h * f(x, y);  // Euler's method formula
        cout << "\n\t" << i << "\t" << x << "\t" << ynext;

        y = ynext;  // Update y to the next value
        x = x + h;  // Update x to the next value
    }

    return 0;
}
