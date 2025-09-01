/*if an user input any number from 1 to 4 then in
 return the program will write it in words eg:
 You have entered 3 other then it will show
 invalid number, try again*/

#include<iostream>
using namespace std;
int main()
{
int d;
cout<<"Enter a number:";
cin>>d;
switch(d)
{
case 1:
    cout<<"You have entered 1.";
    break;
case 2:
    cout<<"You have entered 2.";
    break;
case 3:
    cout<<"You have entered 3.";
    break;
case 4:
    cout<<"You have entered 4."; 
    break;
default:
    cout<<"Invalid number. Try again.";     
}

return 0;
}
