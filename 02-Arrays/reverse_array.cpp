#include<iostream>
using namespace std;
  void reverse_array(int arr[],int n)
  {
    cout<<"enter ho gaya"<<endl;
    
        for(int j=n;j>=0;j--)
        {
            cout<<arr[j]<<' ';
        }
   
  }
    int main()
    {
int arr[100];
int x;
cout<<"enter size"<<endl;
cin>>x;
cout<<"enter elements"<<endl;
for(int i=0;i<x;i++)
{
    cin>>arr[i];
}
reverse_array(arr,7);

} // namespace std;
