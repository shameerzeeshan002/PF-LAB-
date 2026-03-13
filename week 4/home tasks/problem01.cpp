#include<iostream>
using namespace std;
main(){

string country;
int discount;
cout<<"Enter your country name:";
cin>>country;

int ticket_price;
cout<<"Enter ticket price in dollars:";
cin>>ticket_price;

if(country== "Ireland"){
discount = ticket_price*0.1;
int ireland_price;
ireland_price = ticket_price - discount;
cout<<"Ticket Price:"<<ireland_price;
}
else{
int other_country;
discount = ticket_price*0.05;
other_country = ticket_price - discount;
cout<<"Ticket Price:"<<other_country<<endl;

}


}