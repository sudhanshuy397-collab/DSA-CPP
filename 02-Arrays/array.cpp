#include<iostream>
using namespace std;
int main()
{
    int marks[5]={25,59,63,98,56};
    cout<<marks[0]<<endl<<marks[1]<<endl<<marks[2] <<endl<<marks[3] <<endl<<marks[4]<<endl;
    marks[2]=89;
    cout<<marks[2];
    for(int i=0;i<5;i++)
    {
        cout<<"the marks are::" << i << marks[i] <<endl;
    }
    {
    int i=0;
        while(i<5)
    {
        cout<<"the marks are::" << i <<":::::::"<< marks[i] <<endl;
        i++;
    }
    }
    int i=0;
    do{
        cout<<"the marks are::" << i <<":::::::"<< marks[i] <<endl;
        i++;
    }while(i<5);
    return 0;
}