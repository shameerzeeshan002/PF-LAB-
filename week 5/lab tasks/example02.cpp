#include<iostream>
using namespace std;
main(){
    int number;
    cout<<"enter any number";
    cin>>number;
    while(number <=0){
        cout<<"Error"<<number<<"is not a positive number";
        cout<<"Please enter a positive number";
        cin>>number;
    }
    cout<<"Program Ends";
}