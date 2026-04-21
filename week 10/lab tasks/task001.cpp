#include<iostream>
using namespace std;
int n(int number){
    return number*5;
}
main(){
int number = n(number);
cout<<"Enter any number ";
cin>>number;
cout<<n(number);
}