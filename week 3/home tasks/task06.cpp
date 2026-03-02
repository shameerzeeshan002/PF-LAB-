#include<iostream>
using namespace std;
main(){

int bag;
cout<<"Enter the size of fertilizers bag in pounds:";
cin>>bag;

int cost;
cout<<"Enter the cost of the bag:";
cin>>cost;

int area;
cout<<"Enter the area in square feet that can be covered by the bag:";
cin>>area;



float priceperpound;
priceperpound = cost/bag;

float costpersquarefoot;
costpersquarefoot = cost/area;

cout<<"cost of fertilizer per pound is:"<<priceperpound <<endl;

cout<<"cost of fertilizing per square foot is:" <<costpersquarefoot;












}