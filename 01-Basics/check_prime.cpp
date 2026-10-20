#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    for (int i=2;i<=n;i++)
       if (n%i==0)
       {
           cout<<"not prime"<<endl;
           break;
           return 0;
       }
       else
       {
           cout<<"prime"<<endl;
           return 0;
       }
}
