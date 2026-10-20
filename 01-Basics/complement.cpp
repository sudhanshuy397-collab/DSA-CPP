#include<iostream>
using namespace std;
int main ()
{
    cout << "enter the number  :"<<endl;
    int n;
    int complement=0;
    int power=1;
    int fliped;
    cin>>n;
    for (;n>0;n/=2)
    {
        int bits=n%2;
        
       

        if (bits==0)
        {
            fliped=1;
            
        }
        else
        {
            fliped=0;
            
        }
        cout<<fliped<<" ";

    }
    
}