#include <iostream>
#include <bitset>
using namespace std;

int main() 
{
    int decimal;

    // Take decimal number as input from the user
    cout << "Enter a decimal number: ";
    cin >> decimal;

    // Convert the decimal number to binary using bitset
    // Assuming a 8-bit integer
    bitset<8> binary(decimal);

    // Show the binary representation
    cout << "The number in Binary is:" << binary<< endl;

    return 0;
}
