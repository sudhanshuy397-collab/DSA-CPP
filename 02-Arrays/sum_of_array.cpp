#include<iostream>
using namespace std;

int sum_of_array(int arr[], int x)
{
    int sum=0;
     for (int i=0;i<x;i++){
        sum=sum+arr[i];
     }
     return sum;
}
int main()
{
     int arr[100];
    int x;
    cout<<"Enter the size of the array: ";
    cin>>x;
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];
    }
    int result = sum_of_array(arr, 5);
    cout << "Sum of the array elements is: " << result << endl;

}