#include <iostream>
#include <cmath>
using namespace std;

// Function to integrate
double f(double x) {
    return 1 / (1 + x * x);
}

// Simpson's 3/8 Rule function
double simp38(double a, double b) {
    int n = 99; // Choose n as a multiple of 3
    double h = (b - a) / n;
    double I = 0, J = 0;
    
    // Sum of f(a + i*h) for indices that are multiples of 3 (i % 3 == 0)
    for (int i = 1; i < n; i++) {
        if (i % 3 != 0) {
            I += f(a + i * h);
        } else {
            J += f(a + i * h);
        }
    }
    
    // Applying Simpson's 3/8 rule formula
    return (3 * h / 8) * (f(a) + 3 * I + 2 * J + f(b));
}

int main() {
    double a = 0, b = 1; // Define the limits of integration
    cout << "The result is: " << simp38(a, b) << endl;
    return 0;
}
