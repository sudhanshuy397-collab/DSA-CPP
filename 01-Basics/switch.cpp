#include<iostream>
using namespace std;
int main ()
{
    int num = 2 ;

    switch (num){
        case 1: cout<<"first"<<endl;

        case 2 : cout<<"second" <<endl;
        break;

        default: cout<<"default_value"<< endl;
    }

    char ch = 'a';
    switch (ch){
        case 1: cout<<"first"<<endl;

        case 'a' : switch (num)
        {
        case 2:
            cout<<"hai"<<endl;
            break;
        
        default:
            break;
        }
         cout<<"second" <<endl;

        default: cout<<"default_value"<< endl;
    }

}