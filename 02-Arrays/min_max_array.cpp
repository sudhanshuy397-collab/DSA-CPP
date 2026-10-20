#include<iostream>
#include <climits>
using namespace std;
void min_max(int x,int array[])
{
    int max= INT_MIN;
    int min= INT_MAX;
   for (int i=0; i<x;i++)
   {
    if (array[i]>max){
        max =array[i];
    }
    if (array[i]<min){
        min =array[i];
    }
   }
   cout<<"min is"<<min<<endl<<"max is"<<max;

}
int main()
{
    int x;
    cout<<"enter size";
    cin>>x;
    int array[x];
     cout<<"enter elements"<<endl;
    
 for (int i=0; i<x;i++)
 cin>>array[i];
   
 min_max(5,array);


}