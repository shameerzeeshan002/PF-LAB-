#include<iostream>
using namespace std;
main(){

    int speed;
    cout<<"Enter Speed: ";
    cin>>speed;

   if(speed<=10){
        cout<<"slow";
    }
   else if(speed<=50){
        cout<<"Average";
    }
   else if(speed<=150){
        cout<<"Fast";
    }
   else if(speed<=1000){
        cout<<"ultra fast";
    }
    else {
        cout<<"Extremely Fast";
    }


}