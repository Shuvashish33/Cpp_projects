#include<iostream>
using namespace std;
//declaring function 
void add(int a,int b)
{
int sum=a+b;
cout<<sum<<endl;

}

int main()
{
    //NB:এখানে কিন্তু ভেরিয়েবল এর টাইপ ডিক্লেয়ার করলে হবে ভুল হবে।
    /*মানে এখানে
    int a,b,sum; লেখা যাবে না।উপরেই ওভাবেই করতে হবে।
    
//calling function 

add(5,6);
add(10,5);
return 0;
}