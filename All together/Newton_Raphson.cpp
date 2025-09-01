#include <iostream>
#include <cmath>
#include <iomanip> 
using namespace std;

double f(double x) {
    return pow(x, 3) - 2 * x * x - 4; 
}

double df(double x) 
{
    return 3 * x * x - 4 * x; 
}

double NR(double x) {
    double h = f(x) / df(x); 
    while (abs(h) >= 0.0001) 
    { 
        x = x - h;
        h = f(x) / df(x);
    }
    return x;
}

int main() {
    double x0;
    cout << "Input initial guess: ";
    cin >> x0;

    cout << fixed << setprecision(3); 
    cout << "The root is " << NR(x0) << endl; 

    return 0;
}