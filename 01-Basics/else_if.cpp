#include<iostream>
using namespace std;
  
int main()
{
    int age;
  cout<<"tell me your age "<<endl;
  cin>>age;
  if (age>18)
  {
    cout<<"you can enter to the party"<<endl;

  }
  else if (age==18)
  {
    cout<<"you will get a kid pass"<<endl;
  }
  else
  {
    cout<<"you can not come to the party";
}
switch (age)
{
case 5:
  cout<<"/n you are very young";
  break;
case 15:
  cout<<"still to go";
  break;
case 17:
  cout<<" \n intezaar karo beta";
  break;

default:
  break;
}
  

   return 0;
}