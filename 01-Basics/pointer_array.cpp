#include<iostream>
using namespace std;
  
int main()
{
 int marks[]={23,96,54,32};
 int* p= marks;
 cout<<"the marks are [0]::"<<*p<<endl; 
 cout<<"the marks are [1]::"<<*(p+1)<<endl;
 cout<<"the marks are [2]::"<<*(p+2)<<endl;
 cout<<"the marks are [3]::"<<*(p+3)<<endl;
 cout<<*(p++)<<endl;
 cout<<*p<<endl;
 cout<<*(++p)<<endl;
  return 0;
}

