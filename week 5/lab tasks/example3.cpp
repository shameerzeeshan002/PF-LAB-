#include<iostream>
using namespace std;
main(){
    int n;
    int a=0, b=1, c;
    cout<<"Enter the number of fibancci series you want to print:";
    cin>>n;
cout<<a<<", "<<b<<", ";


for(int i=1; i<n; i++){
    c = a+b;
    cout<<c<<", ";
    a=b;
    b=c;
}
    }