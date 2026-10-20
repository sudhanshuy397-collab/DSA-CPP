#include<iostream>  
using namespace std;
    
       int check ()
       {
        int n;
        cin>>n;
        switch (n%2)
        {case 1: if(n%2==1)
            cout<<"odd"<<endl;
            break;
        case 0: if(n%2==0)
            cout<<"even"<<endl;
            break;
        }
       }
       int main(){
        
        cout<<"enter the number"<<endl;
       
        check();
 
    }