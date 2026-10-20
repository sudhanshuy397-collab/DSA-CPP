#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"enter the number  :"<<endl;
    cin>>n;
    int digit;
    int ans = 0;
     for (;n>0;n/=10)
     {
         digit = n%10;
        cout<<digit<<"";

        ans=ans*10+digit;

     }
    cout<<endl<<"the reverse of the number is :"<<ans<<endl;
    
}