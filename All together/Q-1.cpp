#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;
//global variable নাই
double f(double x, double y, double z)
{
return z;
}
double g(double x, double y, double z)
{
return x-6*y-2*z;
}
//খেলা শুরু
void RK2(double x0, double y0, double z0, double h)
{
//variable declaration 
double x=x0, y=y0, z=z0, k1,k2,l1,l2;
ofstream fout("RK2.dat");
//লুপ ক্চালাবো 
for(x=0; x<=0.2; x+=h)
{
fout<<x<<"\t"<<y<<endl;

k1=h*f(x,y,z);
l1=h*g(x,y,z);

k2=h*f(x+h, y+k1, z+l1);
l2=h*g(x+h, y+k1, z+l1);

//updating y,z
y=y+(k1+k2)/2;
z=z+(l1+l2)/2;
}}
int main()
{
RK2(0,0,1,0.02);
return 0;
}
