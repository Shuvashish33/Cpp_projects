#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); // Seed the random number generator with the current time

    for (int i = 1; i <= 10; i++) {
        int r = (rand() % 11) + (-5); // Generate a random number between -5 and 5
        cout << r << endl;
    }

    cout << RAND_MAX << endl; // Print the maximum value rand() can generate
    cout << rand() << endl;    // Print a random number without any bounds
    cout << time(0) << endl;   // Print the current time (used as a seed)
    
    return 0;
}
