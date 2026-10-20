#include<iostream>
using namespace std;
int main ()
{
    int a ,b;
    cout<<"enter the two numbers of fibonacci series :"<<endl;
    cin>>a>>b;
    int n;
    cout<<"enter the number of terms :"<<endl;
    cin>>n;
    cout<<"the fibonacci series is :"<<endl;
    for (int i=1;i<=n;i++)
    {
        cout<<a<<" ";
        int c=a+b;
        a=b;
        b=c;
    }
}