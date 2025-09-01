#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

double PI(int N) {
    double NO = 0; // Counter for points inside the quarter circle
    double x, y;
    
    srand(time(0)); // Seed the random number generator with the current time
    
    for (int i = 1; i <= N; i++) {
        // Generate random x and y values between 0 and 1
        x = (double)rand() / RAND_MAX;
        y = (double)rand() / RAND_MAX;
        
        // Check if the point (x, y) is inside the quarter circle
        if (sqrt(x * x + y * y) <= 1)
            NO++; // Increment count if inside the circle
    }
    
    // Return the approximation of Pi
    return 4 * (NO / N);
}

int main() {
    for (int i = 1; i <= 1000000000000000; i *= 10) {
        cout << PI(i) << endl;
    }
    
    return 0;
}
