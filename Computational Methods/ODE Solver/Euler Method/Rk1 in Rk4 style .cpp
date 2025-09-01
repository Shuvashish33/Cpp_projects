#include<iostream>
using namespace std;

double f(double x, double y)
{
return (x*x+y);
}
void euler(double x0, double y0, double h)
{
//variable declaration 
 double x=x0,y=y0;
	for(x=0; x<=5; x+=h)
	{
	cout<<x<<"\t"<<y<<endl;
	y=y+h*f(x,y);		
	}
}
int main()
{
	euler(0,1,0.1);
	return 0;
}