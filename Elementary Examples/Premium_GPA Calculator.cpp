#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
 char OS,H,B;
 cout<<"Enter your optional subject: (H/B)\n [H for Higher math\n B for Biology]‌\t:";
 cin>>OS;
 if (OS =='H')
 {
 float b,e,m,p,c,bio,h,i,bgs,r,S,O,N,GPA1,GPA;
 char grade;

N=9;
cout<<"Enter your grade points (0-5) for each subjects:"<<endl;
cout<<"Bangla:";
cin>>b;

cout<<"English:";
cin>>e;

cout<<"General Math:";
cin>>m;

cout<<"Bangladesh and Global Studies:";
cin>>bgs;

cout<<"Religion:";
cin>>r;

cout<<"Physics:";
cin>>p;

cout<<"Chemistry:";
cin>>c;

cout<<"Biology:";
cin>>bio;

cout<<"ICT:";;
cin>>i;

cout<<"Higher Math:";
cin>>h;

/*একটা সিঙ্গেল সাবজেক্টে ফেল করলে এই প্রোগ্রামে
 ফেল দেখায় না ফর্মুলার কারণে তাই আরেকটা if else statement 
 use করছি।*/
if((b*e*m*p*c*bio*i*bgs*r)==0)
{
cout<<"\n\nresult=F";
cout<<"\nComments:Don't demotivate,you can\n still bounce back, so keep hardworking."<<endl; 
}
else
{
  S=(b+e+m+p+c+bio+i+bgs+r);
  
  GPA1=S/N; //GPA1=GPA without optional subject 
  cout<<fixed<<setprecision(2);
  cout<<"\n\nGPA without optional subject is ="<<GPA1;
   O=h-2;
  GPA=(S+O)/N; //GPA with optional subject 
  
  /*সবগুলায় 5 পেলে  GPA পাঁচের উপরে চলে যায় 
   দেখে if statement use করছি*/
   
   if(GPA>=5)
   {
   cout<<"\n\nTotal GPA=5";
   }
   else
   {
   cout<<"\nTotal GPA="<<GPA;
   }
  
  //writing code for grade
  
  if(GPA>=5)
  {
  cout<<"\nGrade=A+";
  grade='X';  // char variable single variable নিতে পারে তাই A+ এর জন্য X use করলাম
  }
  else if((GPA>=4)&&(GPA<5))
  {
  cout<<"\nGrade=A";
  grade='A';
  }
  else if((GPA>=3.5)&&(GPA<4))
  {
  cout<<"\nGrade=A-";
  grade='Y';  // char variable only single variable নিতে পারে তাই A- এর জন্য Y use করলাম
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
        case 'X':
            cout << "Comments:Excellent!" << endl;
            break;
        case 'A':
            cout << "Comments:Very good!" << endl;
            break;
        case 'Y':
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
        cout<<"Comments:Don't demotivate,you can \nstill bounce back ,so keep hardworking."<<endl;  
        default:
            cout << "Comments:Invalid grade." << endl;
    }
    
    }
 }
else if (OS=='B')
{
	 float b,e,m,p,c,bio,h,i,bgs,r,S,O,N,GPA1,GPA;
 char grade;

N=9;
cout<<"Enter your grade points (0-5) for each subjects:"<<endl;
cout<<"Bangla:";
cin>>b;

cout<<"English:";
cin>>e;

cout<<"General Math:";
cin>>m;

cout<<"Bangladesh and Global Studies:";
cin>>bgs;

cout<<"Religion:";
cin>>r;

cout<<"Physics:";
cin>>p;

cout<<"Chemistry:";
cin>>c;

cout<<"Biology:";
cin>>bio;

cout<<"ICT:";;
cin>>i;

cout<<"Higher Math:";
cin>>h;

/*একটা সিঙ্গেল সাবজেক্টে ফেল করলে এই প্রোগ্রামে
 ফেল দেখায় না ফর্মুলার কারণে তাই আরেকটা if else statement 
 use করছি।*/
if((b*e*m*p*c*h*i*bgs*r)==0)
{
cout<<"\n\nresult=F";
cout<<"\nComments:Don't demotivate,you can\n still bounce back, so keep hardworking."<<endl; 
}
else
{
  S=(b+e+m+p+c+bio+i+bgs+r);
  
  GPA1=S/N; //GPA1=GPA without optional subject 
  cout<<fixed<<setprecision(2);
  cout<<"\n\nGPA without optional subject is ="<<GPA1;
   O=bio-2;
  GPA=(S+O)/N; //GPA with optional subject 
  
  /*সবগুলায় 5 পেলে  GPA পাঁচের উপরে চলে যায় 
   দেখে if statement use করছি*/
   
   if(GPA>=5)
   {
   cout<<"\n\nTotal GPA=5";
   }
   else
   {
   cout<<"\nTotal GPA="<<GPA;
   }
  
  //writing code for grade
  
  if(GPA>=5)
  {
  cout<<"\nGrade=A+";
  grade='X';  // char variable single variable নিতে পারে তাই A+ এর জন্য X use করলাম
  }
  else if((GPA>=4)&&(GPA<5))
  {
  cout<<"\nGrade=A";
  grade='A';
  }
  else if((GPA>=3.5)&&(GPA<4))
  {
  cout<<"\nGrade=A-";
  grade='Y';  // char variable only single variable নিতে পারে তাই A- এর জন্য Y use করলাম
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
        case 'X':
            cout << "Comments:Excellent!" << endl;
            break;
        case 'A':
            cout << "Comments:Very good!" << endl;
            break;
        case 'Y':
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
        cout<<"Comments:Don't demotivate,you can \nstill bounce back ,so keep hardworking."<<endl;  
        default:
            cout << "Comments:Invalid grade." << endl;
    }
    
    }
    
}    
else 
{
	cout<<"Invalid Choice,try again";
return 0;
}}