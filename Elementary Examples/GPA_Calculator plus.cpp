#include<iostream>
using namespace std;
int main()
{
 float b,e,m,p,c,bio,h,i,bgs,r,pe,ce,S,O,N,GPA1,GPA;
 char grade;

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
  
  /*সবগুলায় 5 পেলে  GPA পাঁচের উপরে চলে যায় 
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
  grade='A+';
  }
  else if((GPA>=4)&&(GPA<5))
  {
  cout<<"\nGrade=A";
  grade='A';
  }
  else if((GPA>=3.5)&&(GPA<4))
  {
  cout<<"\nGrade=A-";
  grade='A-';
  }
  else if((GPA>=3)&&(GPA<3.5))
  {
  cout<<"\nGrade=B";
  grade='B';
  }
  else if((GPA>=2)&&(GPA<3))
  {
  cout<<"\nGrade=C";
  grade='C';
  }
  else if((GPA>=1)&&(GPA<2))
  {
  cout<<"\nGrade=D";
 grade='D';
  }
  else
  {
  cout<<"\nGrade=F";
  grade='F';
 }
  
  // c এর কমান্ড ও সি++ এ use করা যায় এভাবে। 
  printf("\n");
  /*Now using switch statement to
  add comments on their result*/
   switch (grade)
    {
        case 'A+':
            cout << "Comments:Excellent!" << endl;
            break;
        case 'A':
            cout << "Comments:Very good!" << endl;
            break;
        case 'A-':
            cout << "Comments:Good job!" << endl;
            break;
        case 'B':
            cout << "Comments:Keep studying." << endl;
            break;
        case 'C':
            cout << "Comments:You need to study more." << endl;
            break;
        case 'D':
        cout<<"Comments:Very poor performance,\n go and study right now"<<endl;
        break;
        case 'F':
        cout<<"Comments:Don't demotivate, you can bounce back"<<endl;  
        default:
            cout << "Comments:Invalid grade." << endl;
    }

return 0;
}