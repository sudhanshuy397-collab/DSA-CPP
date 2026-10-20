#include<iostream>
using namespace std;
int main ()
{
    cout<<"COUNTING"<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<i<<endl;
        if(i==4)
        {
            break;
        }
    }
    cout<<"counting for continue: "<<endl;
    for(int i=0;i<10;i++)
    {
        if(i==4)
        {
            continue;
        }
        cout<<i<<endl;
        
    }
    return 0 ;
}