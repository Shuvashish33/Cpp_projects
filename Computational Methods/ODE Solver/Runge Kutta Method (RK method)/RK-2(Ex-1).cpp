#include<iostream>
#include<cmath>   
using namespace std;

void rk2(double x, double y, double h)
{
    double k1, k2; 

    for(x = 0; x <= 5; x += h)
    {
        cout << x << "\t" << y << endl;
        
        k1 = h * (x*x + y);                
        k2 = h * ((x+h)*(x+h) + y + k1);    

        y = y + 0.5 * (k1 + k2); 
    }
}

int main()
{
    rk2(0, 1, 0.1);
    return 0;
}
