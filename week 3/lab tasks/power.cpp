#include<iostream>
using namespace std;
main()
{
int voltage;
cout<<" Enter Voltage : ";
cin>>voltage;

int current;
cout<<" Enter Current :" ;
cin>>current;

int power;
power = current*voltage;

cout<<" The power is "<<power<<"watts";
}