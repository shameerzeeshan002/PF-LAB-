#include<iostream>
using namespace std;
int even(int n){
    int d1 = (n/10000)%10;
    int d2 = (n/1000)%10;
    int d3 = (n/100)%10;
    int d4 = (n/10)%10;
    int d5 = n%10;
    return d1+d2+d3+d4+d5;
}
main(){
    int n;
    cout<<"Enter your number ";
    cin>>n;
    if(even(n)%2==0){
        cout<<"even";
    }else{
        cout<<"odd";
    }
}