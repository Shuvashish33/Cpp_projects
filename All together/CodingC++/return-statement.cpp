#include <iostream>
using namespace std;

void print() //এখানে print এর পরিবর্তে p বা যেকোন কিছু ব্যবহার করা যেত
 {
    for (int i = 0; i <= 100; ++i) 
    {
        if (i == 5) 
        {
            return;  // Terminate the function when i is 5
        }
        cout << i << "s ";
    }
}

int main()
 {
    print();
    return 0;
}
