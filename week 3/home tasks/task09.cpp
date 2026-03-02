#include<iostream>
using namespace std;
main()
{

int num;
cout<<"Enter any 4 digit number:";
cin>>num;

int d4;
d4 = num%10;
num=num/10;

int d3;
d3 = num%10;
num = num/10;

int d2;
d2 = num%10;
num = num/10;

int d1;
d1 = num%10;

int sum;
sum = d1+d2+d3+d4;

cout<<"sum of individual digits:"<<sum;































}