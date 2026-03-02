#include<iostream>
using namespace std;
main()
{

int n;
cout<<"Enter the sides of polygon:";
cin>>n;

int sum;
sum = (n-2)*180;
cout<<"The sum of interior angle is";

cout<<n<<"-sided polygon is:"<<sum<<"degrees"<<endl;
}