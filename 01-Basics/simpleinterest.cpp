#include<iostream>
using namespace std;
int main()
{
    int principle, rate, time ;
    cout<<"enter principle amount:"<<endl;
    cin>>principle;
    cout<<"enter rate:"<<endl;
    cin>>rate;
    cout<<"enter time:"<<endl;
    cin>>time;
    cout<<"simple interst is :"<<(principle*rate*time)/100<<endl;
    return 0;   
}