#include<iostream>
using namespace std;
int main ()
{
    int arr[10];
    cout<<"enter elements"<<endl;
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    // linear search
    int n;
    cout<<"enter element to find : ";
    cin>>n;
    bool found=false;
    for(int i=0;i<10;i++)
    {
        if (arr[i]==n){
            cout<<"element found at array["<<i<<"]"<<endl; 
            found=true;
            break;
        }

        if (found=false){
            cout<<"element not found";
        }
       
        
    }
   
}