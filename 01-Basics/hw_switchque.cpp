#include<iostream>
using namespace std;
    int main(){
        int amount;
        cout << "enter amount"<<endl;
        cin>>amount;

        int note;
        cout << "enter note"<<endl;
        cin>>note;

        switch (note)
        {
        case 100:
            cout<<(amount/100)<<endl;
            break;

            amount=amount%100;
            case 50:
            cout<<(amount/50)<<endl;
            
            break;

            amount=amount%50;

            case 20:
            cout<<(amount/20)<<endl;
            
            break;

            amount=amount%20;

            case 10:
            cout<<(amount/10)<<endl;
            
            break;

        
        default:
            break;
        }
    }