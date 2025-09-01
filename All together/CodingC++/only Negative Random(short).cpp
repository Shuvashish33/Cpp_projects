#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); // Seed the random number generator with the current time

    for (int i = 1; i <= 10; i++)
    {
        int r = (rand() % 11) + (-11); // Generate a random number between -5 and 5
        cout << r << endl;
    }
    return 0;
}
