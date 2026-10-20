#include<iostream>
using namespace std;

float multiply(float a , float b){
    float c = a*b;
    return c;
}
    float sum(float d , float e){
    float f = d+ e;
    return f;
}
 void greeting(){
    cout<<endl<<"hello sudhanshu";
 }

int main ()
{
    float num1,num2;
 cout<<"num 1 :"<<endl;
 cin>>num1;
 cout<<"num 2:"<<endl;
 cin>>num2;
 cout<<"multiplication is ::"<<multiply(num1 , num2)<<endl<<sum(num1 , num2);
 greeting();
    return 0;
}