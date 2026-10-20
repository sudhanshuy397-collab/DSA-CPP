#include<iostream>
using namespace std;    
int main()
{
    int n;
    int i=1;
    cout<<"Enter the number of rows: ";
    cin>>n;
    int a=1;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<a++;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}