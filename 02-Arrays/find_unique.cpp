//Problem statement
//You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].
//Now, in the given array/list, 'M' numbers are present twice and one number is present only once.
//You need to find and return that number which is unique in the array/list.

//Note:


//Unique element is always present in the array/list according to the given condition.
//Detailed explanation ( Input/output format, Notes, Images )
//Constraints :
//1 <= t <= 10^2
//Time Limit: 1 sec//
//0 <= N <= 10^3

#include<iostream>
using namespace std;
int findUnique(int *arr, int size)
{   
    
    int count=0;
    for (int i=0;i<size;i++)
    {   for(int j=0;j<size;j++)
        if (arr[i]==arr[j]){
            count++;
            if(count==0){
        return arr[i];
    }
        }
    }
    
}
int main()
{
    cout<<"start code :   ";
    int m;
    cin>>m;
    
    int size;
    size = 2*m+1;
    cout<<size;
    int arr[size];
    
    for (int i=0; i<size;i++)
    {
    cin>>arr[i];
    }
    
    cout<<findUnique(arr,size);
}