#include <iostream>
#include <cmath>

using namespace std;

double f(double x) {
    return cos(x) - x * exp(x);
}

double bisection(double a, double b) {
    double c;
    while (abs(b - a) >= 0.001) {
        c = (a + b) / 2;
        if (f(c) == 0) {
            return c;
        } else if (f(a) * f(c) < 0) {
            b = c;
        } else {
            a = c;
        }
    }
    return c;
}

int main() {
    double a, b;

    cout << "Input a: ";
    cin >> a;

    cout << "Input b: ";
    cin >> b;

    cout << "The root is: " << bisection(a, b) << endl;

    return 0;
}