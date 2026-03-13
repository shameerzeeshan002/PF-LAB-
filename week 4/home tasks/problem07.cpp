#include<iostream>
using namespace std;
main(){
    string figure;
    cout<<"Enter your figure";
cin>>figure;

if(figure=="square"){
    float sides;
    cout<<"Enter the length of its side";
    cin>>sides;

int area = sides*sides;
cout<<area;
}
else if(figure == "rectangle"){
float side1,side2;
cout<<"Enter length"<<endl;
cin>>side1;
cout<<"Enter width "<<endl;
cin>>side2;
cout<<side1*side2;
}

else if(figure == "circle" ){
    float radius,pi=3.14;
    cout<<"Enter Radius";
    cin>>radius;
    cout<<radius*radius*pi;
}
else{
float base,height;
cout<<"Enter Base";
cin>>base;

cout<<"Enter height";
cin>>height;

cout<<0.5*base*height;




}













}