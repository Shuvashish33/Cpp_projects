#include <iostream>
#include <bitset>
using namespace std;

int main() {
    string b;

    // Take binary number as input from the user
    cout << "Enter a binary number: ";
    cin >> b;

    // Convert the binary number to decimal using bitset
    bitset<4> d(b);
    unsigned long decimalNumber = d.to_ulong();

    // Show the decimal representation
    cout << "Decimal representation: " << decimalNumber << endl;

    return 0;
}
