#include <iostream>
using namespace std;

int main() 
{
    for (int i = 0; i < 10; ++i) 
    {
        if (i == 5) 
        {
            continue; // Skip the remaining code in this iteration when i is 5
        }
        cout << i << " "; // Loop body
    }
    return 0;
}
