#include<iostream>
using namespace std;
int main ()
{
    cout <<"enter the number;"<<endl;
    int n;
    cin>>n;
    cout << "The number is: " << n << endl;
    int count=0;
   for(;n>0;n/=2)
   { 
    
    int digit = n%2;
       cout<<digit<<" ";
       if(digit == 1)
       {
           count++;
       }
   }
   cout <<endl<< "Number of 1s in binary representation: " << count << endl;
   return 0;
}