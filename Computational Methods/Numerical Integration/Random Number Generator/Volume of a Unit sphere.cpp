#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

double V(int N)
 {
    double N0 = 0;
    double x, y, z;

    srand(time(0));  // Seed for random number generation

    for (int i = 0; i < N; ++i) 
    {
        // Generate random x, y, z values between -1 and 1
        x = 2 * ((double)rand() / RAND_MAX) - 1;
        y = 2 * ((double)rand() / RAND_MAX) - 1;
        z = 2 * ((double)rand() / RAND_MAX) - 1;

        // Check if the point (x, y, z) is inside the sphere
        if ((x * x + y * y + z * z) <=1) {
            N0++;
        }
    }

    // Calculate the volume of the sphere as a fraction of the cube's volume
    return 8*(N0/ N);
    
  }

int main()
 {

    for(int i=1; i<=10000000 ;i*=10)
    {
    cout<<V(i)<<endl;
    
    }
    
    return 0;
}
