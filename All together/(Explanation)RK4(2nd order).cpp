#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;

// Constants for the pendulum problem
const double g = 9.8; // gravitational constant
const double L = 1.0; // length of the pendulum

// Function for the first derivative: du/dt = v
double f1(double u, double v) {
    return v;
}

// Function for the second derivative: dv/dt = (-g/L) * sin(u)
double f2(double u, double v)
 {
    return (-g / L) * sin(u);
}

void RK4(double t0, double u0, double v0, double h) 
{
    double t = t0, u = u0, v = v0;
    double k1_u, k2_u, k3_u, k4_u;
    double k1_v, k2_v, k3_v, k4_v;

    ofstream fout("RK4_SecondOrder.dat");

    // Output initial conditions
    

    // RK4 loop using a for loop
    for (t = t0; t <= 20; t += h)
     {
        cout << t << "\t" << u << "\t" << v << endl;
    fout << t << "\t" << u << "\t" << v << endl;
        // RK4 coefficients for u and v
        k1_u = h * f1(u, v);
        k1_v = h * f2(u, v);

        k2_u = h * f1(u + k1_u / 2, v + k1_v / 2);
        k2_v = h * f2(u + k1_u / 2, v + k1_v / 2);

        k3_u = h * f1(u + k2_u / 2, v + k2_v / 2);
        k3_v = h * f2(u + k2_u / 2, v + k2_v / 2);

        k4_u = h * f1(u + k3_u, v + k3_v);
        k4_v = h * f2(u + k3_u, v + k3_v);

        // Update u and v
        u = u + (k1_u + 2*k2_u + 2*k3_u + k4_u) / 6;
        v = v + (k1_v + 2*k2_v + 2*k3_v + k4_v) / 6;

        // Output the current values
        fout << t << "\t" << u << "\t" << v << endl;
    }

    fout.close();
}

int main() {
    double t0 = 0;     // Initial time
    double u0 = 1;     // Initial angle (u(0) = 1 rad)
    double v0 = 0;     // Initial angular velocity (u'(0) = 0)
    double h = 0.01;   // Time step size
    

    RK4(t0, u0, v0, h);

    return 0;
}
