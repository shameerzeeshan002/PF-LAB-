#include<iostream>
using namespace std;
main(){
    char operation;
    cout<<"Welcome to the calculator:"<<endl;
int number1;
cout<<"Enter first number:";
cin>>number1;

int number2;
cout<<"Enter second number:";
cin>>number2;

cout<<"Enter the operator";
cin>>operation;

if( operation == '+' ){
    cout<<"Result:"<<number1-number2;

}
if( operation == '-'){
    cout<<"Result:"<<number1+number2;
}
if( operation == '*'){
    cout<<"Result:"<<number1/number2;
}
if( operation == '/'){
    cout<<"Result:"<<number1*number2;
}
}