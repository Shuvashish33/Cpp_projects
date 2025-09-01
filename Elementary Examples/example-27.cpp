#include<iostream>
using namespace std;
int main()
{
   int H,L,R;
   cout<<"Enter the highest number:";
   cin>>H;
   cout<<"Enter the lowest number:";
   cin>>L;
   
   //running the loop
   
   do
   {
   R=H%L;
   H=L;
   L=R;
   
   }
   while(H%L!=0); /*মানে এই লোকটা ততক্ষণ পর্যন্ত চালাও 
    যতক্ষণ পর্যন্ত না H ও L এর ভাগশেষ শূন্য হয়*/
    //তাই অবশ্যই while(H%L==0) লেখা যাবে না।, কারণ এই কন্ডিশনে লুপ চালাই না, বরং টার্মিনেট করি।
    
  cout<<"\nGCD="<<L;
   
   
return 0;
}