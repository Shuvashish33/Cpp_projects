#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;

//declaring parameters
double f(double x, double y)
{
	return (x*sqrt(y));
}
void RK4(double x0, double y0, double h)
{
//declaring variables	
double x=x0,y=y0,k1,k2,k3,k4;

ofstream fout("Rk4.dat");

for(x=0; x<=20; x+=h)
{
fout<<x<<"\t"<<y<<endl;	
cout<<x<<"\t"<<y<<endl;
	k1=h*f(x,y);
    k2=h*f(x+h/2, y+k1/2);
    k3=h*f(x+h/2, y+k2/2);
    k4=h*f(x+h, y+k3);
    
    y=y+(k1+2*k2+2*k3+k4)/6; //updating y

}
fout.close();
}
int main()
{
RK4(0,1,0.01);
return 0;
}