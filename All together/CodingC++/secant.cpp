#include <iostream>
#include <cmath>

using namespace std;

double f(double x) {
     return pow(x, 3) - 2 * x * x - 4;
}

double secant(double x0, double x1) {
    double x2;
    while (abs(x2 - x1) > 0.0001) {
        x2 = x1 - f(x1) * (x1 - x0) / (f(x1) - f(x0));
        x0 = x1;
        x1 = x2;
    }
    return x2;
}

int main() {
    double x0, x1;

    cout << "Input initial guess x0: ";
    cin >> x0;

    cout << "Input initial guess x1: ";
    cin >> x1;

    
    cout << "The root is: " << secant(x0, x1) << endl;

    return 0;
}