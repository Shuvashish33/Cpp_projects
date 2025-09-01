#include<iostream>
using namespace std;
int main()
{
   int i=1,fact=1,n;
   
   cout<<"Enter the number:";
   cin>>n;
   
   do
   {
   fact=fact*i;
   i+=1;
   
   }
   while(i<=n);
   cout<<n<<"!="<<fact;

return 0;
}