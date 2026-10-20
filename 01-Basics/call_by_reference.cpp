#include<iostream>
using namespace std;

//void swap (int a , int b){ ye kaam nahi karega agar karna hai toh reference variable use karna padega
  //void swapreferencevar (int &a, int &b)
  //  int temp=a;
    //a=b;
   // b=temp;
//}
void swap_pointer(int* a , int* b){
    int temp=*a;
     *a=*b;
     *b=temp;
}

int main()
{
    int x=2, y=3;
    cout<<"x is"<<x<<endl<<"y is"<<y<<endl;
    //swap(x,y); kaam nhi karega use karne k liye refernve var use karo
    swap_pointer(&x,&y);
    cout<<"x is"<<x<<endl<<"y is"<<y<<endl;
    return 0;
}