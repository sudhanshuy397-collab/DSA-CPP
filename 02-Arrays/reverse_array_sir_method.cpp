#include<iostream>
using namespace std;
int main()
{
    int arr[6]={ 2, 3, 4, 5, 6, 7 };
    int start=0;
    int end=5;
    for ( int start=0;start<=end;start++)
    {
       swap(arr[start],arr[end]);
       end--;
    }
    for(int i=0; i<6;i++)
    {
        cout<<arr[i];
    }

}