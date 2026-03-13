#include<iostream>
using namespace std;
main(){
    float red_rose;
    cout<<"Enter the number of Red Rose:";
    cin>>red_rose;
red_rose = red_rose*2.00;
float white_rose;
cout<<"Enter the number of White Rose";
cin>>white_rose;
white_rose = white_rose*4.10;
float tulip;
cout<<"Enter the number of tulip";
cin>>tulip;
tulip = tulip*2.50;
float total;
total = red_rose+white_rose+tulip;
cout<<"Original Price:"<<total<<endl;

if(total > 200){
 float discount = total*0.2;
 float discounted_price = total - discount;
 cout<<"Price After Discount:"<<discounted_price;
}
}