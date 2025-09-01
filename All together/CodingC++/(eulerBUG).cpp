#include<iostream>
#include<fstream>  // For file handling
using namespace std;

// Function to calculate dy/dx = f(x, y) = y^2+x
float f(float x, float y)
{
    return (x*x+y);
}

int main()
{
    // Initial conditions and constants
    float x = 0, y = 1, h = 0.1; 
   

    cout << "\t n \t x \t y(n+1)\n";  // File title
    
    // Loop for the number of iterations
    for(int i = 1; i <=30; i++)
    {
        float ynext = y + h * f(x, y);  // Euler's method formula

        // Print to the console
        cout << "\n\t" << i << "\t" << x << "\t" << ynext<<endl;

        // Write to the file
        

        y=ynext; // Update y to the next value
        x = x + h;  // Update x to the next value
    }

    
    return 0;
}
    