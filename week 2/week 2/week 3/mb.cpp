#include<iostream>
using namespace std;
main()
{
int MB;
cout<<" enter the sizes in megabytes";
cin>>MB;

float kb;
kb= MB*1024;

float bytes;
bytes = kb*1024;


float bits;
bits = bytes*8;
cout<<MB<<"MB"<< "is equivalent to"<<bits;
}

