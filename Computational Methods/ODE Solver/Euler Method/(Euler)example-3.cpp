#include<iostream>
#include<fstream>
using namespace std;
void euler(double x, double y, double h)
{
for(x=0; x<=0.1; x+=h)
{
cout<<x<<"\t"<<y<<endl;
y=y+(x+y)*h;

}}
int main()
{
euler(0,1,0.02);
return 0;
}