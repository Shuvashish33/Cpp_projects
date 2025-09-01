#include<iostream>
using namespace std;

int add(int a, int b) {
  return a + b;
}

int main() {
  int sum = add(5, 3); // Call the function
  cout << "Sum: " << sum << endl; // Print the result
  return 0; // Ensure proper program termination
}