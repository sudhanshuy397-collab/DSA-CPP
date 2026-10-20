#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    for (int i=1;i<=n;i++)
   {                 
    // for 1st triangle //
        for (int j=1;j<=n-i+1;j++)
        {
            cout<<j;
        }
        // for star//
        for (int j=(i-1)*2;j>=1;j--)
        {
            cout<<"*";
        }
        // for 3rd triangle //
        for (int j=n-i+1;j>=1;j--)
        {
            cout<<j;
        }
        cout<<endl;
        
}
}