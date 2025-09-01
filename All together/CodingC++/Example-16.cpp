/*program of printing Largest 
number between three numbers*/

#include <iostream>
using namespace std;

int main()
 {
    int a,b,c;

    cout << "Enter two number: ";
    cin >> a>>b>>c;

    if ((a>b) && (a>c))
    {
        cout << "Largest value is "<<a;
    }
     else if ((b>a)&&(b>c))
    {
        cout << "Largest value is "<<b;
    }
 else 
 {
 cout<<"Largest value is "<<c;
 }
    return 0;
}
    