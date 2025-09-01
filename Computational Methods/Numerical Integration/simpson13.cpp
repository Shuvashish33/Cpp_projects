#include <iostream>
#include <cmath>
using namespace std;

// Function to integrate
double f(double x)
{
    return 1 / (1 + x * x);
}

// Simpson's 1/3 Rule function
double simp13(double a, double b)
 {
    int n = 100; // Set n to an even number
    double h = (b - a) / n;
    double odd = 0, even = 0;
    
    // Sum of f(a + i*h) for odd indices
    for (int i = 1; i <= n-1; i += 2) {
        odd += f(a + i * h);
    }
    
    // Sum of f(a + i*h) for even indices
    for (int i = 2; i <=n-2; i += 2) {
        even += f(a + i * h);
    }
    
    // Applying Simpson's 1/3 rule formula
    return (h / 3) * (f(a) + 4 * odd + 2 * even + f(b));
}

int main() {
    double a = 0, b = 1; // Define the limits of integration
    cout << "The result is: " << simp13(a, b) << endl;
    return 0;
}
