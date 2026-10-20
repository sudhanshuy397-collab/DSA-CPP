#include<iostream>
using namespace std;
  struct college
  {
    string name ;
     int id;
     float per;

  };
  union employee
  {
    int id;
    int roll_no;
    int serial_no;
  };
  //3 define me se ek use kar sakte hai

int main()
{
  struct college iiit;
  struct college nit;
  struct college vit;

  union employee e1;
  e1.id=5;

  cout<<e1.id<<endl;
  //enum::::::
  enum milk {amul , pahadi , desi};
  milk m1 =desi;
 cout<<pahadi<<endl;
 cout<<desi<<endl;
 cout<<amul<<endl;
 cout<<m1<<endl;


  iiit.name="sudhanshu";
  iiit.id=45;
  iiit.per=98.56;
  nit.name="nishant";
  nit.id=56;
  nit.per=95.65;
  vit.name="jagdish";
  vit.id=589;
  vit.per=99.65;

cout<<"the values are::"<<iiit.name<<endl<<nit.name<<endl<<vit.name<<endl;
cout<<"the values are::"<<iiit.id<<endl<<nit.id<<endl<<vit.id<<endl;
cout<<"the values are::"<<iiit.per<<endl<<nit.per<<endl<<vit.per<<endl;

  return 0;
}