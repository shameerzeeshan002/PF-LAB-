
#include<iostream>
using namespace std;
int symmetrical(int n){
    int n1 = n/100;
    int n2 = n%10;
    return n1 == n2;
}
main(){
    int n;
    cout<<"Enter any number ";
    cin>>n;
 if(symmetrical(n)){
    cout<<"Symmetrical";
 }
 else{
    cout<<"not symmetrical";
 }
}