#include<iostream>
using namespace std;

struct employee {
   int id;
   string name;
   float salary;

};
int main(){
    cout<<"the structure is used as::"<<endl;
    struct employee e1;
    struct employee e2;
    struct employee e3;

    e1.id=2;
    e2.id=3;
    e3.id=4;
    e1.name="sudhanshu";
    e2.name="aashish";
    e3.name="amit";
    e1.salary=100.78;
    e2.salary=268.89;
    e3.salary=3789.76;
    cout<<"id are:::::"<<e1.id<<endl<<e2.id<<endl<<e3.id<<endl;
    cout<<"names are:::"<<e1.name<<endl<<e2.name<<endl<<e3.name<<endl;
    cout<<"salary are::"<<e1.salary<<endl<<e2.salary<<endl<<e3.salary<<endl;
}