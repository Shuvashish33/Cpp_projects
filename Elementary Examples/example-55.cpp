#include<iostream>
using namespace std;
int main()
{
int i,fact=1,n;
cout<<"Enter the number:";
cin>>n;

    for(i=1;i<=n;i++)
    {
    fact=fact*i;
    }
    cout<<n<<"!="<<fact;


return 0;
}