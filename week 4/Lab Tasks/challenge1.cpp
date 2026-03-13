#include<iostream>
using namespace std;
main(){
    int bill;
    int discount;
    int finalbill;
    cout<<"enter your bill";
    cin>>bill;
    if( bill <= 5000){
        discount = bill*0.05;
    }
    else {
        discount = bill*0.1;
     }
      finalbill = bill - discount;
     cout<<"your discounted bill is:"<<finalbill<<endl;
}