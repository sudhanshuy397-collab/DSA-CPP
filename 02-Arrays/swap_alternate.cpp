#include<iostream>
using namespace std;
int main () {
    int arr[7]={2,3,4,5,6,7,8};
    for(int i=0;i+1<7;i+=2)
    {
        swap(arr[i],arr[i+1]);
        
    }
     for(int i=0;i<7;i++)
    {
        
        cout<<arr[i];
    }
}