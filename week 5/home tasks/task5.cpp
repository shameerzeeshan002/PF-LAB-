#include<iostream>
using namespace std;
main(){
    int number,sum=0;
    cout<<"Enter a Number ";
    cin>>number;

    int temp = number;
    while(temp>0){
        int digit = temp%10;
        sum = sum+digit;
        temp = temp/10;
    }
    cout<<"Sum of digits "<<number<<" is "<<sum<<endl;
}