#include<iostream>
#include<cmath>
using namespace std;
float minNum(float num1,float num2){
    return min(num1,num2);
}
main(){
    float num1, num2;
    cout<<"Enter number ";
    cin>>num1;
    cout<<"Enter number ";
    cin>>num2;
    cout<<"Minimum Number "<<minNum(num1,num2);
}