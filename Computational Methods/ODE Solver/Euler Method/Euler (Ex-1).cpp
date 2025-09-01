#include<iostream>
using namespace std;
float f(float x, float y)
{  
 return(x*y);
}
 int main()
 {
  float x,y,n,h,ynext;
  cout<<"\t Simple Euler's Method "<<endl;
  cout<<"\t dy/dx =f(x,y)=xy"<<endl;
  cout<<"Enter X০=";
  cin>>x;
  cout<<"Enter y০=";
  cin>>y;
  cout<<"Enter step size h=";
  cin>>h;
  cout<<"Enter the number of Iteration,n=";
  cin>>n;
  //Creating table's title(1st row)
  cout<<"\n\t n \t x \t y(n+1)";
  cout<<"\n----------------------------------------";
  cout<<"\n\t 0"<<"\t"<<x<<"\t"<<y<<endl;
  //Initializing the loop for # iteration 
  
  for(int i=1; i<=n; i++)
  {
  ynext=y+h*f(x,y);
  cout<<"\n\t"<<i<<"\t"<<x+h<<"\t"<<ynext;
 
  y=ynext; 
  x=x+h;
  /*এই উপরের দুই লাইন ইনিশিয়াল মানকে নতুন
   মান দ্বারা আপডেট করবে*/

  
  }
  
  
 
 }