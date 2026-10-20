#include<iostream>
using namespace std;
int main (){
    int amount;
        cout << "enter amount"<<endl;
        cin>>amount;

        int note[]={100,50,20,10};
        for (int i=0;i<=3;i++)
        {
            cout<<"no of note:"<<amount/note[i]<<endl;
            amount=amount%note[i];
        }
}