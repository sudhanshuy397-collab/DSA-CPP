#include<iostream>
using namespace std;
int main()
{
    cout<<"for loop..........."<<endl;
    for (int i=5;i>0;i--)
    {
        cout<<i<<endl;
    }
    for (int i=20;i>0;i--)
    {
         i--;
        cout<<i<<endl;
        i--;
    }
    {
    int i=10;
    cout<<"while loop........."<<endl;
    while (i<=20)
    {
      cout<<i<<endl;
      i++;
    }
    }
    { 
        int i=10;
    cout<<"do while loop......."<<endl;
    do {
        cout<<i<<endl;
        i--;
    }while(i>0);
    }

    return 0 ;
}