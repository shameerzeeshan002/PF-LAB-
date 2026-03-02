#include<iostream>
using namespace std;
main()
{

string name;
cout<<" Enter the movie name:";
cin>>name;

int adult;
cout<<"Enter the adult ticket price:";
cin>>adult;

int child;
cout<<"Enter the child ticket price:";
cin>>child;

int adultsold;
cout<<"Enter the number of adult ticket sold:";
cin>>adultsold;

int childsold;
cout<<"Enter the number of child ticket sold:";
cin>>childsold;

int percdonated;
cout<<"Enter the percentage of amount to be donated to the charity";
cin>>percdonated;

int totalsold;
totalsold = (adultsold*adult) + (childsold*child);

int donation;
donation = (totalsold/100)*percdonated;

int remaining;
remaining = totalsold-donation;

cout<<"Total amount generated from ticket sales:" <<totalsold<<endl;

cout<<"Donation to charity:"<<donation<<endl;

cout<<"Remaining amount after donation:"<<remaining<<endl;





















}