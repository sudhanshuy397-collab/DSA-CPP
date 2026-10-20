#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    for (int i=1;i<=n;i++)
   {                 
    // for spaces //
        for (int j=n-i;j>=1;j--)
        {
            cout<<" ";
        }
        // for 1st triangle //
        for (int j=1;j<=i;j++)
        {
            cout<<j;
        }
        // for 2nd triangle //
        for (int j=i-1;j>=1;j--)
        {
            cout<<i-j;
        }
        cout<<endl;
        
}
}
        