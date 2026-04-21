#include<iostream>
using namespace std;
void addition(int number1,int number2);
int main(){
    int number1 , number2;
    cout<<"Enter Number 01 ";
    cin>>number1;
    cout<<"Enter Number 02 ";
    cin>>number2;
    addition(number1,number2);
    return 0;
}
void addition(int number1,int number2){
    cout<<"Sum "<<number1+number2;
}