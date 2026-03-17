#include<iostream>
using namespace std;
main(){
    int number,total = 0;
    cout<<"Enter your number:";
    cin>>number;

    int digittofind;
    cout<<"Enter your digit:";
    cin>>digittofind;

    for(int temp = number; temp > 0; temp = temp/10){
        int digit = temp % 10;
        if(digit == digittofind)
        {
            total = total+1;

        }
    }
cout<<"Digit Occurs "<<total<< " times";


}