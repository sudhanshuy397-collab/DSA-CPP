#include<iostream>
using namespace std;
int main ()
{
    cout<<"enter the number  :"<<endl;
     int n;
    cin>>n;
    bool check=true;
   
    for (int i=0;i<=n;i/=2)
    {
        
        
        if(n%2==0)
        {
            cout<<n<<" is a power of 2"<<endl;
            check=true;
            
            break;
        }
        else
        {
            cout<<n<<" is not a power of 2"<<endl;
            check=false;
            break;
        }
        
    }
    cout<<endl<<check<<endl;
}