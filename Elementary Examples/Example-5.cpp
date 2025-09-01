#include<iostream>
#include<cmath>
using namespace std;
int main()
{
float a,b,c,s,A;


   cout<<"Enter a=";
   cin>>a;
 
   cout<<"Enter b=";
   cin>>b;
 
   cout<<"Enter c=";
   cin>>c;
 
s=(a+b+c)/2; 
 A=sqrt(s*(s-a)*(s-b)*(s-c));
 
   cout<<"Area of the triangle is "<<A;

return 0;
}