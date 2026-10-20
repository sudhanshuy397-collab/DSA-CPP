#include<iostream>
using namespace std;
void print_array(int x,int array[])
{
    cout<<"enter elements"<<endl;
    for(int i=0; i<x;i++)
    {
        array[i]=i;
    }
 for (int i=0; i<x;i++)
 cout<<array[i]<<' ';
}

int main ()
{
    cout<<"enter the size of array"<<endl;
    int x;
    cin>>x;
    int array[x];

print_array(x,array);
    

    int size =sizeof(array)/sizeof(int);
    cout<<endl<<size;
 


}