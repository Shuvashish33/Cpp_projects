#include <iostream>
using namespace std;

int main() {
    int a;

    cout << "Even numbers from 1 to 10 are: ";

    for (a = 2; a <= 10; a++)
    {
        if (a % 2!= 0) 
        { // Check if odd (not divisible by 2)
            continue; // Skip to the next iteration if odd
        }
        cout << a << " ";
    }
    return 0;
}
