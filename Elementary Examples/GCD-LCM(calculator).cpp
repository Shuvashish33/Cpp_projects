#include<iostream>
using namespace std;
int main()
{
    int LCM;
    
   int x,y,H,L,R;
   cout<<"Enter two numbers:";
   cin>>x>>y;
   
   //to decide H,L : running a if else statement 
   
   if(x>y)
   {
   H=x;
   L=y;
   }
   else
   H=y;
   L=x;
   
   
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
  
  LCM=(x*y)/L;
  cout<<"\nLCM="<<LCM;
   
   
return 0;
}