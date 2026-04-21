#include<iostream>
using namespace std;

double v(double l, double w, double h){
    return (l*w*h)/3.0;
}
main(){
 double l,w,h;
 cout<<"Enter length, width, height in meters ";
 cin>>l>>w>>h;
 
 string unit;
 cout<<"Enter output units (millimeters, centimeters, meters, kilometers)";
 cin>>unit;

 if(unit == "millimeters"){
    double vol = v(l,w,h);
    vol = vol*1000*1000*1000;
    cout<<vol<<" cubic millimeters";
 }
 else if(unit == "kilometers"){
 double vol = v(l,w,h)/1000000000.0;
 cout<<vol<<" cubic kilometers";
 }
 else if(unit == "centimeters"){
    double vol = v(l,w,h)*1000000.0;
    cout<<vol<<" cubic centimeters";
 }
 else if(unit == "meters"){
    double vol = v(l,w,h);
    cout<<vol<<" cubic meters";
 }

}