#include<iostream>
#include<cmath>
using namespace std;

// Function to approximate the solution using Euler's method
void euler(double x, double y, double h)
{
    // Looping over the range of x values
    for(x = 0; x <= 5; x += h)
    {
    cout << x << "\t" << y << endl;
    y=y+h*(y-0.5*exp(x/2)*sin(5*x)+5*exp(x/2)*cos(5*x));
    }

}

int main()
{
    
    euler(0, 0, 0.1);

    return 0;
}
    