#include<iostream>
using namespace std;

    int factorial( int a){
        
      int fact=1;
      {
      for (int i=a;i>=1;i-- )
         fact = fact * i;
         
    }
    return fact;}
      int main(){
       
       

        int n,r;
        cout<<"enter the two numbers :"<<endl;
        cin>>n>>r;
         int prob=factorial(n)/(factorial(n-r)*factorial(r));

         cout<<"the probability of the two numbers is :"<<prob<<endl;


}