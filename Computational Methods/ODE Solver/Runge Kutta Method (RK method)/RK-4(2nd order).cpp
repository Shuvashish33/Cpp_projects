#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;
double g=9.8,L=1;
double f(double t, double u, double v)
{
return v;
}

double b(double t, double u, double v)
{
return (-g/L)*sin(u);
}
//খেলা শুরু
void RK4(double t0, double u0, double v0, double h)
{
double t=t0, u=u0, v=v0,k1,k2,k3,k4,l1,l2,l3,l4;
 ofstream fout("Rk4_2nd_order.dat");
 //starting loop
 for(t=0; t<=20; t+=h)
 {
 fout<<t<<"\t"<<u<<"\t"<<v<<endl;
 cout<<t<<"\t"<<u<<"\t"<<v<<endl;
 //formulae
 
 k1=h*f(t,u,v);
 l1=h*b(t,u,v);
 
 k2=h*f(t+h/2, u+k1/2, v+l1/2);
 l2=h*b(t+h/2, u+k1/2, v+l1/2);
 
 k3=h*f(t+h/2, u+k2/2, v+l2/2);
 l3=h*b(t+h/2, u+k2/2, v+l2/2);
 
 k4=h*f(t+h, u+k3, v+l3);
 l4=h*b(t+h, u+k3, v+l3);
 
 //updating u,v
 u=u+(k1+2*k2+2*k3+k4)/6;
 v=v+(l1+2*l2+2*l3+l4)/6;
 
 
 }}
int main()
{
RK4(0,1,0,0.01);
return 0;
}