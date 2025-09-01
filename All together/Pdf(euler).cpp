#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;
void euler(double x, double y, double h)
{
	for(x=0; x<=5; x+=h)
	{
	cout<<x<<"\t"<<y<<endl;
	y=y+h*(x*x+y);		
	}
}
int main()
{
	euler(0,1,0.1);
	return 0;
}