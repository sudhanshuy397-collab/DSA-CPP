#include<iostream>
using namespace std;
  int cou(int x )
  {
    int count=0;
    for(int i=x;i>=1;i/=2)
    {
        int bits=i%2;
        if (bits==1){
            count++;
        }
    }
    return count;
  }
  int main ()
{
    int a,b;
    cout<<"enter numbers"<<endl;
    cin>>a>>b;
    cou(a);
    cou(b);
    cout<<"the sum of the set bits is :"<<cou(a)+cou(b)<<endl;
    
}