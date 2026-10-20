#include<iostream>
using namespace std;
int main ()
{
    int a , b;
     cin >>a;

     cin>>b;
    char op;
    cin >> op;

    switch(op){
    case '+' :cout<< (a+b);
    break;
    case '-' :cout<< a-b;
    break;
    case '*' :cout<< a*b;
    break;
    case '/' :cout<< a/b;
    break;
}
}