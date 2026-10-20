#include<iostream>
#include <climits>
using namespace std;
void min_max(int x,int array[])
{
   int a=INT_MIN; // sabse minimum value maan lete hai
   for(int i=0;i<x;i++)
   {
    a=max(a,array[i]);  //har number se ek ek karke compare ho raha hai
   }      
   int b=INT_MAX;    
   for(int i=0;i<x;i++)  
        {
            b=min(b,array[i]);
        }
   cout<<"maximum is"<<a<<endl;
   cout<<"minimum is"<<b;
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