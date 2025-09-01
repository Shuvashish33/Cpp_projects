#include <iostream>
#include<string>
using namespace std;

int main() {
    string nm;

    cout << "Enter your name:";

    // Read the input from the user
    getline(cin,nm);

    // Display the entered game score
    cout<<"this is your name:"<<nm;

    return 0;
}
