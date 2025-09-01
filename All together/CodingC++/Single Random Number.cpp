#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

using namespace std;

int main() {
    srand(time(0));  // Seed the random number generator with the current time

    int r = (rand() % 11) + (-5);  // Generate a random number between -5 and 5
    cout << r << endl;  // Print the single random number

    return 0;
}
