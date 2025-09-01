#include<iostream>
#include<fstream>
using namespace std;
int main()
{
ofstream file;
file.open("MyInfo.text");
file<<"I am shuvashish sharma"<<endl;
file.close();


return 0;
}