#include <iostream>

using namespace std;

int main() {
    char grade;

    cout << "Enter your grade (A, B, C, D, or F): ";
    cin >> grade;

    switch (grade) 
    {
        case 'A':
            cout << "Excellent!" << endl;
            break;
        case 'B':
            cout << "Very good!" << endl;
            break;
        case 'C':
            cout << "Good job!" << endl;
            break;
        case 'D':
            cout << "You can do better." << endl;
            break;
        case 'F':
            cout << "You need to study more." << endl;
            break;
        default:
            cout << "Invalid grade." << endl;
    }

    return 0;
}
