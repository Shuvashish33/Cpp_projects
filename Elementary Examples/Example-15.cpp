/*program of printing Largest 
number between two numbers*/

#include <iostream>
using namespace std;

int main()
 {
    int a,b;

    cout << "Enter two number: ";
    cin >> a>>b;

    if (a>b) 
    {
        cout << "Largest value is "<<a;
    }
     else 
    {
        cout << "Largest value is "<<b;
    }

    return 0;
}
    