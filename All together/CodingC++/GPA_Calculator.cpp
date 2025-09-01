#include<iostream>
using namespace std;
int main()
{
 float b,e,m,p,c,bio,h,i,bgs,r,pe,ce,S,O,N,GPA1,GPA;

N=11;

cout<<"Bangla:";
cin>>b;

cout<<"English:";
cin>>e;

cout<<"General Math:";
cin>>m;

cout<<"Physics:";
cin>>p;

cout<<"Chemistry:";
cin>>c;

cout<<"Biology:";
cin>>bio;

cout<<"Higher Math:";
cin>>h;

cout<<"ICT:";;
cin>>i;

cout<<"Bangladesh and Global Studies:";
cin>>bgs;

cout<<"Religion:";
cin>>r;

cout<<"Physical Education:";
cin>>pe;

cout<<"Career Education:";
cin>>ce;

  O=h-2;
  S=(b+e+m+p+c+bio+h+i+bgs+r+pe+ce);
  
  GPA1=(S-h)/N; //GPA1=GPA without optional subject 
  cout<<"\n\nGPA without optional subject is ="<<GPA1;
  
  GPA=(S+0)/N; //GPA with optional subject 
  
  /*সবগুলায় 5 পেলে জি GPA পি এর পাঁচের উপরে চলে যায় 
   দেখে if statement use করছি*/
   
   if(GPA>=5)
   {
   cout<<"\n\nGPA=5";
   }
   else
   {
   cout<<"\nTotal GPA="<<GPA;
   }
  
  //writing code for grade
  
  if(GPA>=5)
  {
  cout<<"\nGrade=A+";
  }
  else if((GPA>=4)&&(GPA<5))
  {
  cout<<"\nGrade=A";
  }
  else if((GPA>=3.5)&&(GPA<4))
  {
  cout<<"\nGrade=A-";
  }
  else if((GPA>=3)&&(GPA<3.5))
  {
  cout<<"\nGrade=B";
  }
  else if((GPA>=2)&&(GPA<3))
  {
  cout<<"\nGrade=C";
  }
  else if((GPA>=1)&&(GPA<2))
  {
  cout<<"\nGrade=D";
  }
  else
  {
  cout<<"\nGrade=F";
  }

return 0;
}