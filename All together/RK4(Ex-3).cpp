#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;
double f(double x, double y, double z)
{
return z;
}
double g(double x, double y, double z)
{
return (x*x)*z+2*x*y+1;
}
void RK4(double x0, double y0, double z0, double h)
{
double x=x0,y=y0,z=z0,k1,k2,k3,k4,l1,l2,l3,l4;
 ofstream fout("Ex-3.dat");
 for(x=0; x<=0.1;x+=h)
 {
 fout<<x<<"\t"<<y<<"\t"<<z<<endl;
 //formulae 
 k1=h*f(x,y,z);
 l1=h*g(x,y,z);
 
 k2=h*f(x+h/2, y+k1/2, z+l1/2);
 l2=h*g(x+h/2, y+k1/2, z+l1/2);
 
 k3=h*f(x+h/2, y+k2/2, z+l2/2);
 l3=h*g(x+h/2, y+k2/2, z+l2/2);
 
 k4=h*f(x+h, y+k3, z+l3);
 l4=h*g(x+h, y+k3, z+l3);
 
y=y+(k1+2*k2+2*k3+k4)/6;
z=z+(l1+2*l2+2*l3+l4)/6;
 }}
 int main()
 {
 
 RK4(0,1,0,0.01);
 return 0;
 }
