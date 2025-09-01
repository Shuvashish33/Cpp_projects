#include<iostream>
#include<fstream>  // For file handling
using namespace std;

// Function to calculate dy/dx = f(x, y) = xy
float f(float x, float y)
{
    return (x * y);
}

int main()
{
    // Initial conditions and constants
    float x = 1, y = 1, h = 0.01; 
    
    // Open the file to write the output
    ofstream fout("euler.dat");

    // Print the title of the table in the file and on console
    cout << "\t Simple Euler's Method " << endl;
    cout << "\t dy/dx = f(x,y) = xy" << endl;
    cout << "\n\t n \t x \t y(n+1)";
    cout << "\n----------------------------------------";

    fout << "\t n \t x \t y(n+1)\n";  // File title
    fout << "----------------------------------------\n";
cout<<"\n\t 0"<<"\t"<<x<<"\t"<<y<<endl;

    // Loop for the number of iterations
    for(int i = 1; i <= 3; i++)
    {
        float ynext = y + h * f(x, y);  // Euler's method formula

        // Print to the console
        cout << "\n\t" << i << "\t" << x+h << "\t" << ynext;

        // Write to the file
        fout << "\t" << i << "\t" << x+h << "\t" << ynext << endl;

        y = ynext;  // Update y to the next value
        x = x + h;  // Update x to the next value
    }

    // Close the file
    fout.close();

    return 0;
}
    